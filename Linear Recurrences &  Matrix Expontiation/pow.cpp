/***************************************
Author: Md Rakibul Hasan
date: 2024-06-19 13:20:54
****************************************/

#include <bits/stdc++.h>
using namespace std;

int bigExpo(int a, int b)
{
    if (b == 0)
        return 1;
    long long result = bigExpo(a, b / 2);
    if (b & 1)
        return a * result * result;
    else
        return result * result;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    cout << bigExpo(a, b);

    return 0;
}