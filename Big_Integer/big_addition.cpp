/***************************************
Author: Md Rakibul Hasan
date: 2024-06-18 21:39:21
****************************************/

#include <bits/stdc++.h>
using namespace std;

int digit_to_char(int digit)
{
    return digit + '0';
}

int char_to_int(char ch)
{
    return ch - '0';
}

string addNumber(string n1, string n2)
{
    // make sure n2 is larger
    if (n1.length() > n2.length())
        swap(n1, n2);

    string result = "";
    // reverse this two number ;
    reverse(n1.begin(), n1.end());
    reverse(n2.begin(), n2.end());

    // addition upto n1.length();
    int carry = 0, sum = 0; // in this beginning carry is 0 and sum is also zero;
    for (int i = 0; i < n1.length(); i++)
    {
        int digit_1 = char_to_int(n1[i]);
        int digit_2 = char_to_int(n2[i]);
        sum = digit_1 + digit_2 + carry;
        int output_digit = sum % 10;
        carry = sum / 10;
        result.push_back(digit_to_char(output_digit));
    }
    // addition upto n1.length() to n2.length()
    for (int i = n1.length(); i < n2.length(); i++)
    {
        int digit_2 = char_to_int(n2[i]);
        sum = digit_2 + carry;
        int output_digit = sum % 10;
        carry = sum / 10;
        result.push_back(digit_to_char(output_digit));
    }
    // finally if a carry is generated
    if (carry)
        result.push_back('1');
    // reverse and i can get the final result
    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // input a number as a string because it is a big number
    string s1, s2;
    cin >> s1 >> s2;

    string result = addNumber(s1, s2);
    cout << result << endl;

    return 0;
}