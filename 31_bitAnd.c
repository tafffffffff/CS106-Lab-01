#include <stdio.h>

/* 
 * bitAnd - x&y using only ~ and | 
 *   Example: bitAnd(6, 5) = 4
 *   Legal ops: ~ |
 *   Max ops: 8
 *   Rating: 1
 */
int bitAnd(int x, int y)
{
    // 1001
    // 0110
    // 1000
    // 0111
    return ~(~x | ~y);
    // ~x return all the 0s as 1
    // ~y return all the 0s as 1
    // ~x | ~y return all the 0s in x or y as 1
    // we negate this value we will get those bits that are not 0 in both a and y
}

int test_bitAnd(int x, int y)
{
    return x & y;
}

int main(void)
{
    int x = -1;
    int y = 10;
    printf("expected: %x\n", test_bitAnd(x, y));
    printf("actual  : %x\n", bitAnd(x, y));
}
