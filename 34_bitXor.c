#include <stdio.h>

/* 
 * bitXor - x^y using only ~ and & 
 *   Example: bitXor(4, 5) = 1
 *   Legal ops: ~ &
 *   Max ops: 14
 *   Rating: 1
 */
int bitXor(int x, int y)
{
    return ~(x & y) & ~(~x & ~y);
    // x & y is in both x and y
    // ~(x & y) not in (both x and y together)-> values either appear in x or y or none
    // check as long as not both bits are 1
    // ~x & ~y return value that is not in x, not in y->values dont appear in either x or y, both bits 0
    // check whether both bits are 0, true return 1
    // select bits like 01, 10,11
    // must be values that is inside x or y or both
    // negate this we get value that is either in x or y

    
    // ~(~x & ~y) = x | y
    // ~(~(~x & ~y)) = ~(x|y)
    //              = ~x & ~y
}

int test_bitXor(int x, int y)
{
    return x ^ y;
}

int main(void)
{
    int x = 4;
    int y = 5;
    printf("expected: %x\n", bitXor(x, y));
    printf("actual  : %x\n", test_bitXor(x, y));
}
