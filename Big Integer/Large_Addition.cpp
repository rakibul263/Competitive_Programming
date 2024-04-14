/* Given two large numbers. The numbers may not not fit into long long int, the task is to add these two numbers.
Input
str1 = 3333311111111111",
str2 = "44422222221111",
Output
3377733333332222 */

/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-14 23:37:56
 ******************************/

#include <bits/stdc++.h>
using namespace std;

char char_to_digit(char ch)
{
    return ch - '0';
}

int digit_to_char(int n)
{
    return n + '0';
}

string addNumber(string s1, string s2)
{
    if (s1.length() > s2.length())
    {
        swap(s1, s2);
    }

    string result = ""; // this string is empty

    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    // add digit upto s1.length;
    int carry = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        int n1 = char_to_digit(s1[i]);
        int n2 = char_to_digit(s2[i]);
        int sum = n1 + n2 + carry;
        int output_digit = sum % 10;
        carry = sum / 10;
        result.push_back(digit_to_char(output_digit));
    }

    for (int i = s1.length(); i < s2.length(); i++)
    {
        int n2 = char_to_digit(s2[i]);
        int sum = n2 + carry;
        int output_digit = sum % 10;
        carry = sum / 10;
        result.push_back(digit_to_char(output_digit));
    }

    // if a carry is generated
    if (carry)
    {
        result.push_back('1'); // max digit 9+9+1
    }

    // reverse final result
    reverse(result.begin(), result.end());

    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;

    string result = addNumber(s1, s2);
    cout<<result<<endl;
    return 0;
}