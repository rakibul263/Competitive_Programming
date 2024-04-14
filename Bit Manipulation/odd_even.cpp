/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-09 10:09:57
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;

    if (x & 1)
        cout << "Odd" << endl;
    else
        cout << "Even" << endl;

    return 0;
}