/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-09 14:37:32
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    if ((n & (n - 1)) == 0)
        cout << "Power of two" << endl;
    else
        cout << "Not Power of two" << endl;

    return 0;
}