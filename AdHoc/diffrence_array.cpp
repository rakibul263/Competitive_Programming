/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-06 11:43:18
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

    int diff[n];
    for (int i = 0; i < n; i++)
        diff[i] = 0;

    int q;
    cin >> q;
    while (q--)
    {
        int l, r, v;
        cin >> l >> r >> v;
        diff[l] += v;
        diff[r + 1] -= v;
    }

    for (int i = 1; i < n; i++)
        diff[i] += diff[i - 1];

    for (int i = 0; i < n; i++)
        ara[i] += diff[i];

    for (int i = 0; i < n; i++)
        cout << ara[i] << " ";

    cout << endl;

    return 0;
}