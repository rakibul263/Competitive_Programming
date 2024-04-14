/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-07 00:13:23
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int ara[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ara[i][j];
        }
    }
    int prefix[n][m];
    prefix[0][0] = ara[0][0];
    for (int i = 1; i < m; i++)
        prefix[0][i] = prefix[0][i - 1] + ara[0][i];
    for (int i = 1; i < n; i++)
        prefix[i][0] = prefix[i - 1][0] + ara[i][0];
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            prefix[i][j] = (prefix[i][j - 1] + prefix[i - 1][j] + ara[i][j]) - prefix[i - 1][j - 1];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << prefix[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}