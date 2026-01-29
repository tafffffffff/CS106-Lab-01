#include <stdio.h>

/* 
 * bitOr - x|y using only ~ and & 
 *   Example: bitOr(6, 5) = 7
 *   Legal ops: ~ &
 *   Max ops: 8
 *   Rating: 1
 */
int bitOr(int x, int y)
{
    // 0101
    // 1010
    // 1111

    return ~(~x & ~y);
    // ~x & ~y return 0s that are in both x and y 
}

int test_bitOr(int x, int y)
{
    return x | y;
}

int main(void)
{
    int x = 0;
    int y = 0;
    printf("expected: %x\n", bitOr(x, y));
    printf("actual  : %x\n", test_bitOr(x, y));
}
