#pragma warning(disable:4996)

#include<iostream>
#include<vector>
#include <string>
#include <sstream>  

using namespace std;

int stack[10000];
int top = 0;

int main()
{
	std::string cmd;
	
	int n, num;
	scanf("%d\n", &n);
	for (int i = 0; i < n; i++)
	{
		std::getline(std::cin, cmd);
		if (cmd.length() == 3)
		{
			if ( cmd == "pop")
			{
				if (n == 0)
					cout << -1;
				else
					cout << stack[top--] << endl;
			}
			else //top
			{
				if (top == 0)
					cout << -1 << std::endl;
				else
					cout << stack[top] << endl;
			}
		}
		else if (cmd.length() == 4)
			cout << top << endl;
		else if (cmd.length() == 5)
		{
			if (top)
				cout << 0 << endl;
			else
				cout << 1 << endl;
		}
		else
		{
			std::stringstream cmd2(cmd);
			cmd2 >> cmd >> num;
			std::cout << cmd << num << std::endl;
			stack[++top] = num;
		}
	}

	return 0;
}