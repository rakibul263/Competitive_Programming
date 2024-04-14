/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-07 18:59:21
 ******************************/

#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    while (next_permutation(v.begin(), v.end()))
    {
        print(v, n);
    }

    return 0;
}