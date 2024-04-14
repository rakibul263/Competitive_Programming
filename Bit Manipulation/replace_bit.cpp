/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-09 14:10:15
 ******************************/

// replace bit in N by M;
/* you are given two 32-bits numbers N and M, and two bit position i
and j; write a mathod to set all bits between i and j in N equal to M
M(become a substring and N locationed at and starting J) */

/* Example:
    N = 10000000000
    M = 10101
    i = 2, j = 6
    output : 1001010100
*/

#include <bits/stdc++.h>
using namespace std;

void clearBitInRange(int &n, int i, int j)
{
    int a = (~0) << (j + 1);
    int b = (1 << i) - 1;
    int mask = a | b;
    n = mask & n;
}
void replaceBits(int &n, int i, int j, int m)
{
    clearBitInRange(n, i, j);
    int mask = (m << i);
    n = n | mask;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 15;
    int i = 1;
    int j = 3;
    int m = 2;

    replaceBits(n, i, j, m);

    cout<<n;

    return 0;
}