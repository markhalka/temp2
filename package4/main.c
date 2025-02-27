#include "interface.h"

int main() {
    char buf[1024];
    ssize_t n = in(buf, 1024);

    out("Starting overflow test\n");
    long total = 100;

    for (int i = 0; i < n; i++) {
        // Multiply total by (1 + byte)
        total = total * ((unsigned char)buf[i] + 1);
    }

    out("Finished multiplication\n");
    
    int value = 100 / total;
    return 0;
}
