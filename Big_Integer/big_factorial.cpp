/***************************************
Author: Md Rakibul Hasan
date: 2024-06-19 12:36:49
****************************************/

#include <bits/stdc++.h>
using namespace std;

void mulitply(vector<int> &a, int no, int &size) // size ans vector use pass by referance because size ans vector is update
{
    int carry = 0; // initially carry is zero;
    for (int i = 0; i < size; i++)
    {
        int product = a[i] * no + carry;
        a[i] = product % 10;
        carry = product / 10;
    }
    while (carry)
    {
        a[size] = carry % 10;
        carry = carry / 10;
        size = size + 1;
    }
}
void big_factorial(int n)
{
    vector<int> a(1000, 0);
    a[0] = 1;
    int size = 1;
    for (int i = 2; i <= n; i++)
    {
        mulitply(a, i, size);
    }
    // print the reslt reverse order;
    for (int i = size - 1; i >= 0; i--)
    {
        cout << a[i];
    }
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    big_factorial(n);

    return 0;
}