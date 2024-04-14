/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-10 00:04:36
 ******************************/

/*
Unique 2N+2
unique number given 2N+2 numbers, where every number comes twice
Expect one number, Find out that unique number
*/

/* BitMasking
1. XOR of two unique > 0 (atlist 1set bit)
2. A bit is set when it is present in exacly one of the two numbers
3. Pos of 1 set bit (First set bit from right)
 */

#include <bits/stdc++.h>
using namespace std;

void unique_number_II(int ara[], int n)
{
    int XOR = 0;
    for (int i = 0; i < n; i++)
        XOR ^= ara[i];

    int pos = 0;
    int temp = XOR;
    while ((temp & 1) != 1)
    {
        pos++;
        temp = temp >> 1;
    }

    int mask = 1 << pos;
    int x = 0;
    int y = 0;
    for (int i = 0; i < n; i++)
    {
        if ((ara[i] & mask) > 0)
        {
            x ^= ara[i];
        }
    }
    y = x ^ XOR;
    cout << min(x, y) << " " << max(x, y);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int ara[n];
    for (int i = 0; i < n; i++)
        cin >> ara[i];

    unique_number_II(ara, n);

    return 0;
}