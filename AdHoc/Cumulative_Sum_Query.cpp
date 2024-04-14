/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-06 04:52:48
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int ara[n];
    for (int i = 0; i < n; i++)
        cin >> ara[i];
    int prefix[n];
    prefix[0] = ara[0];
    for (int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] + ara[i];
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        if (l == 0)
            cout << prefix[r] << '\n';
        else
            cout << prefix[r] - prefix[l - 1] << '\n';
    }
    return 0;
}