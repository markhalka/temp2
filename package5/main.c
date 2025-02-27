#include "interface.h"

int dive(const char *buf, int idx, int len, int depth) {
    if (idx >= len) {
        // reached end, return depth
        return depth;
    }
    if (buf[idx] == 'R') {
        // keep recursing if we see 'R'
        return dive(buf, idx + 1, len, depth + 1);
    } else {
        // stop recursion on any other character
        return depth;
    }
}

int main() {
    char buf[1024];
    ssize_t n = in(buf, 1024);

    out("Recursion test\n");
    int depth = dive(buf, 0, n, 0);

    // If recursion is too deep => bug
    int value = 100 / (depth - 500);
    return 0;
}
