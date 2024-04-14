/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-09 22:48:15
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int converted_into_binary(int n)
{
    int ans = 0;
    int p = 1;
    while (n > 0)
    {
        int last_bit = n & 1;
        ans += p * last_bit;
        p = p * 10;
        n = n >> 1;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    cout << converted_into_binary(n);

    return 0;
}