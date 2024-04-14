/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-09 23:23:44
 ******************************/

/*
Unique 2N+1
unique number given 2N+1 numbers, where every number comes twice
Expect one number, Find out that unique number
*/

#include <bits/stdc++.h>
using namespace std;

void unique_bit(int ara[], int n)
{
    int XOR = 0;

    for (int i = 0; i < n; i++)
        XOR ^= ara[i];

    cout << XOR << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int ara[] = {1, 5, 3, 5, 8, 9, 8, 1, 3};
    int size = sizeof(ara) / sizeof(int);

    unique_bit(ara, size);

    return 0;
}