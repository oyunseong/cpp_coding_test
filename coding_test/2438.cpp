// º°Âï±â
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n; 
	cin >> n;
	string str;
	for (int i = 1; i <= n; i++)
	{
		str.append("*");
		cout << str<<endl;
	}
	return 0; 
}