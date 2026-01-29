#include <stdio.h>

/* 
 * fitsShort - return 1 if x can be represented as a 
 *   16-bit, two's complement integer.
 *   Examples: fitsShort(33000) = 0, fitsShort(-32768) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 8
 *   Rating: 1
 */
int fitsShort(int x)
{
    return !(((x<<16)>>16)^x);
    // !((x>>16)^(x>>15))
    // ABCD EFGH IJKL MNOP
    //           ABCD EFGH
    //           BCDE FGHI
    // this check whether from I to A the bits are the same
    // 0000 0000 1111 1111
}

int test_fitsShort(int x)
{
    short int sx = (short int) x;
    return x == sx;
}

int main(void)
{
    int x = 0x00007FFF;
    printf("expected: %x\n", fitsShort(x));
    printf("actual  : %x\n", test_fitsShort(x));
}
