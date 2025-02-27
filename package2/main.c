#include "interface.h"

static unsigned short calc_checksum(const char *data, ssize_t len) {
    unsigned short sum = 0;
    for (int i = 0; i < len; i++) {
        sum = (sum + (unsigned char)data[i]) & 0xFFFF;
    }
    return sum;
}

int main() {
    char buf[1024];
    ssize_t n = in(buf, 1024);

    out("Read some data\n");

    // Single coverage check
    unsigned short c = calc_checksum(buf, n);
    printf("c: %d\n", c);
    int value = 100 / (c - 0x5A5A);
    out("Checksum does not match\n");
    return 0;
}
