/***************************************
Author: Md Rakibul Hasan
date: 2024-06-20 16:58:30
****************************************/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
vector<bool> isPrime(N, 1);
vector<int> lowestPrime(N, 0), heightPrime(N, 0);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < N; ++i)
    {
        if (isPrime[i])
        {
            lowestPrime[i] = heightPrime[i] = i;
            for (int j = i * 2; j < N; j += i)
            {
                isPrime[j] = false;
                heightPrime[j] = i;
                if (lowestPrime[j] == 0)
                    lowestPrime[j] = i;
            }
        }
    }

    for (int i = 1; i <= 50; i++)
    {
        cout << lowestPrime[i] << " " << heightPrime[i] << endl;
    }

    return 0;
}