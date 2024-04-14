/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-07 11:13:16
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
    bool flag = false;
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> ara[i];
        if (ara[i] == 0)
            flag = true;
    }
    if (flag == true)
        cout << "0" << '\n';
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (ans <= 10e18 / ara[i])
                ans *= ara[i];
            else
            {
                ans = -1;
                break;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}