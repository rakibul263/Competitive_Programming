/***************************************
Author: Md Rakibul Hasan
date: 2024-06-22 11:36:38
****************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
            cout << i << '\n';
    }

    return 0;
}

/*
Input :
24


Output:
1
2
3
4
6
8
12
24 */