/******************************
* author: Md Rakibul Hasan
* date: 2024-04-07 14:55:22
******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    sort(s.begin(), s.end());
    while(next_permutation(s.begin(), s.end()))
    {
        cout<<s<<endl;
    }
    return 0;
}