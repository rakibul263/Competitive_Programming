/***************************************
Author: Md Rakibul Hasan
date: 2024-06-22 11:59:27
****************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    set<int> a;
    for (int i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            // cout << i << " " << n / i << '\n';
            a.insert(i);
            a.insert(n / i);
        }
    }
    // sort(a.begin(), a.end());
    int count = 0, sum = 0;
    for (int val : a)
    {
        count++;
        sum += val;
        cout << val << endl;
    }
    cout << "Count: " << count << '\n';
    cout << "Sum: " << sum << '\n';

    return 0;
}

/* Input : 24

Output : 1
2
3
4
6
9
12
18
36
Count : 9
Sum : 91 */
