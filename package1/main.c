#include "interface.h"

int main() {
    char buf[1024];
    ssize_t n = in(buf, 1024);

    // Simple coverage path #1
    if (n < 16) {
        out("Input too short\n");
        return 0;
    } else {
        out("Input long enough\n");
    }

    // Simple coverage path #2 - partial checks
    const char *secret = "SUPERSECRETMAGIC";
    for (int i = 0; i < 15; i++) {
        if (buf[i] != secret[i]) {
            out("Mismatch\n");
            return 0;
        }
    }
    
    int value = 100 / (buf[15] - 'C');
    return 0;
}
