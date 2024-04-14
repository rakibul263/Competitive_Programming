/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-09 10:13:45
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int getithbit(int n, int i)
{
    int mask = (1 << i);
    return (n & mask) > 0 ? 1 : 0;
}

void clearithbit(int &n, int i)
{
    int mask = ~(1 << i);
    n = (n & mask);
}

void setithbit(int &n, int i)
{
    int mask = (1 << i);
    n = (n | mask);
}

void updateithbit(int &n, int i, int v)
{
    clearithbit(n, i);
    int mask = (v << i);
    n = (n | mask);
}

void clearlastbit(int &n, int i)
{
    int mask = (-1 << i);
    n = n & mask;
}

void clearBitInRange(int &n, int i, int j)
{
    int a = (~0) << (j + 1);
    int b = (1 << i) - 1;
    int mask = a | b;
    n = n & mask;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 31;
    int i = 1;
    int j = 3;

    // cin >> i;

    // cout << getithbit(n, i) << endl;
    // clearithbit(n,i);
    // setithbit(n, i);
    // updateithbit(n, i, 1);
    // clearlastbit(n, i);
    clearBitInRange(n,i,j);

    cout << n;

    return 0;
}