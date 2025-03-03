#include "interface.h"

int main() {
    char buf[1024];
    ssize_t n = in(buf, 1024);

    if (n < 12) {
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
    if (buf[3] == 'A') out("Stage4 pass\n");
    else out("Stage4 fail\n");

    // Stage 5
    if (buf[4] == 'D') out("Stage5 pass\n");
    else out("Stage5 fail\n");

    // Stage 6
    if (buf[5] == '0') out("Stage6 pass\n");
    else out("Stage6 fail\n");

    // Stage 7
    if (buf[6] == '0') out("Stage7 pass\n");
    else out("Stage7 fail\n");

    // Stage 8
    if (buf[7] == 'A') out("Stage8 pass\n");
    else out("Stage8 fail\n");

    // Stage 9
    if (buf[8] == 'B') out("Stage9 pass\n");
    else out("Stage9 fail\n");

    // Stage 10
    if (buf[9] == 'C') out("Stage10 pass\n");
    else out("Stage10 fail\n");

    // Stage 4
    int val = 100 / ((buf[10] - '0') + (buf[11] - '0'));
    return 0;
}
