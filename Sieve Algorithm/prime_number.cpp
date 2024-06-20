/***************************************
Author: Md Rakibul Hasan
date: 2024-06-20 16:25:37
****************************************/

#include <bits/stdc++.h>
using namespace std;
const int N = 10e7 + 10;
vector<bool> isPrime(N, 1);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < N; ++i)
    {
        if (isPrime[i] == true)
        {
            for (int j = 2 * i; j < N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    // N*log(log(N))

    int q;
    cin >> q;
    while (q--)
    {
        int a;
        cin >> a;
        if (isPrime[a])
            cout << "Prime" << endl;
        else
            cout << "Not Prime" << endl;
    }

    return 0;
}

/* input :
4
5 4 7 2

output:

Prime
Not Prime
Prime
Prime
 */