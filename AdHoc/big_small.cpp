/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-07 01:15:00
 ******************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b;
    ll p = 10e18;
    cin >> a >> b;
    ll c = p / a;
    if (b > c)
        cout << "Big" << endl;
    else
        cout << "Small" << endl;

    return 0;
}