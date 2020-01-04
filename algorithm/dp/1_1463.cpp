#include <iostream>
#include <vector>
using namespace std;
int n;
vector<int> Dp;

int func(int a) {

	if (a == 1)
		return 0;
	if (Dp[a] > 0)
		return Dp[a];

	Dp[a] = func(a - 1) + 1;

	if (a % 2 == 0)
	{
		int b = func(a / 2) + 1;
		if (Dp[a] > b)
			Dp[a] = b;
	}
	if (a % 3 == 0)
	{
		int b = func(a / 3) + 1;
		if (Dp[a] > b)
			Dp[a] = b;
	}

	return Dp[a];

}

int main()
{
	cin >> n;
	Dp.resize[n];
	cout << func(n);
}