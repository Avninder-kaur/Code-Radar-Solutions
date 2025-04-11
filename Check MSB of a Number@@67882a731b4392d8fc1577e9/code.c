#include <stdio.h>

int main() {
    int num;
    int msb;
    scanf("%d", &num);

    // MSB is the 31st bit in a 32-bit integer
    msb = (num >> 31) & 1;

    printf("%d\n", num, msb);

    return 0;
}
