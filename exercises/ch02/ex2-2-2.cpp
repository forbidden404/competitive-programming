#include <bits/stdc++.h>

using namespace std;

/* There are several other 'cool' tricks possible with bit manipulation techniques
 * but these are rarely used. Please implement these tasks with bit manipulation:
 */

// Obtain the remainder (modulo) of S when it is divided by N (N is a power of 2)
#define modulo(S, N) ((S) & (N-1))

// Determine if S is a power of 2.
#define isPowerOfTwo(S) (!(S & (S - 1)))

// Turn off the last bit in S
#define turnOffLastBit(S) ((S) & (S-1))

// Turn on the last zero in S
#define turnOnLastZero(S) ((S) | (S+1))

// Turn off the last consecutive run of ones in S
#define turnOffLastConsecutiveBits(S) ((S) & (S + 1))

// Turn on last consecutive zeroes
#define turnOnLastConsecutiveZeroes(S) ((S) | (S-1))

// Solve UVa 11173 - Grey Codes with a one-liner bit manipulation expression for each test case, i.e. find the k-th Gray code.
int greyCode(int k, int n) {
    return (k ^ (k >> 1));
}

// Let's reverse the UVa 11173 problem above. Given a gray code, find its position k using bit manipulation
int positionFromGreyCode(int n) {
    int value = 0;
    for (; n; n >>= 1)
        value ^= n;
    return value;
}

