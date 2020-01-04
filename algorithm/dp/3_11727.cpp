#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a = 0, c = 0, b = 1;
	for (int i = 0; i <= n; i++)
	{
		c = (a*2 + b)%10007;
		a = b;
		b = c;
	}
	cout << a;
	return 0;
}