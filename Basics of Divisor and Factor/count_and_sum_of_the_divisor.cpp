/***************************************
Author: Md Rakibul Hasan
date: 2024-06-22 11:40:15
****************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int count = 0, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << '\n';
            count++;
            sum += i;
        }
    }

    cout << "Count of the divisor : " << count << '\n';
    cout << "Sum of the all divisor : " << sum << '\n';

    return 0;
}