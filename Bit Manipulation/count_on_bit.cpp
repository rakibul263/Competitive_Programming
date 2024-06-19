/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-18 11:18:58
 ******************************/

#include <bits/stdc++.h>
using namespace std;
int check_kth_bit_on_or_off(int x, int k)
{
    return (x >> k) & 1;
}

void count_on_bit(int x)
{
    int count = 0;
    for (int i = 0; i < 8; i++)
    {
        if (check_kth_bit_on_or_off(x, i) == 1)
        {
            count++;
        }
    }
    cout << count << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    count_on_bit(n);

    return 0;
}