/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-23 12:52:09
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int check_kth_bit(int x, int k)
{
    return (x >> k) & 1;
}

void count_set_bit(int x)
{
    int count = 0;
    for (int i = 0; i < 8; i++)
    {
        if (check_kth_bit(x, i) == 1)
            count++;
    }
    cout << count << endl;
}

int turn_on_kth_bit(int x, int k)
{
    return (x | (1 << k));
}

int turn_off_kth_bit(int x, int k)
{
    return (!(1 << k) & x);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int n;
    // cin >> n;
    // count_set_bit(n);
    // cout << result << endl;
    // cout << turn_on_kth_bit(44, 4);
    cout << turn_off_kth_bit(44, 3) << endl;

    return 0;
}