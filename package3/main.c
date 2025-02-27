#include "interface.h"

int main() {
    char buf[1024];
    ssize_t n = in(buf, 1024);

    if (n < 5) {
        out("Too short\n");
        return 0;
    }

    // Stage 1
    if (buf[0] == 'A') out("Stage1 pass\n");
    else out("Stage1 fail\n");

    // Stage 2
    if (buf[1] == 'B') out("Stage2 pass\n");
    else out("Stage2 fail\n");

    // Stage 3
    if (buf[2] == 'C') out("Stage3 pass\n");
    else out("Stage3 fail\n");

    // Stage 4
    int val = 100 / ((buf[3] - '0') + (buf[4] - '0'));
    return 0;
}
