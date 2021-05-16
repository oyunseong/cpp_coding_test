#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int sum = 0;
	string str;
	cin >> str;

	for (int i = 0; i < n; i++)
	{
		
		sum += (int)str[i]-48;
	}
	cout << sum;
	return 0;
}