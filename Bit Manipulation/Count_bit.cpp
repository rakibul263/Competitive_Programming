/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-09 22:14:55
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int countBit(int n)
{
    int count = 0;
    while (n > 0)
    {
        int last_bit = (n & 1);
        count += last_bit;
        n = n >> 1;
    }
    return count;
}

//counting set bit  : faster mathod 
int count_bit_hack(int n)
{
    //remove the last set bit from the current bit
    int count = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    cout << countBit(n) << endl;
    cout << count_bit_hack(n) << endl;

    return 0;
}