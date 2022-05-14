#include<iostream>
using namespace std;
string Add(string a, string b) 
{
	string sum = "";
	int carry = 0;
	while(a.size() < b.size()) 
	{
		a = "0" + a;
	}
	while(a.size() > b.size()) 
	{
		b = "0" + b;
	}
	int i, n = a.size() - 1;
	for(i = n; i >= 0; -- i) 
	{
		int number = (a[i] - 48) + (b[i] - 48) + carry;
		sum = char(number % 10 + 48) + sum;
		carry = number / 10;
	}
	if(carry > 0) 
	{
		sum = char(carry + 48) + sum;
	}
	return sum;
}
int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	string a, b;
	cin >> a >> b;
	cout << Add(a, b);
}