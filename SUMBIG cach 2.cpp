#include<bits/stdc++.h>
using namespace std;
string findSum(string str1, string str2)
{
    if(str1.length() > str2.length())
    swap(str1, str2);
    string str = "";
    int i, n1 = str1.length(), n2 = str2.length();
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    int carry = 0;
    for(i = 0; i < n1; ++ i)
    {
        int sum = ((str1[i] - '0') + (str2[i] - '0') + carry);
        str.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    for(i = n1; i < n2; ++ i)
    {
        int sum = ((str2[i] - '0') + carry);
        str.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    if(carry > 0)
    {
        str.push_back(carry + '0');
    }
    reverse(str.begin(), str.end());
    return str;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string str1, str2;
    cin >> str1 >> str2;
    cout << findSum(str1, str2);
}