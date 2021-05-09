// º°Âï±â
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string str;
	for (int i = 1; i <= n; i++)
	{
		str.append("*");
		cout <<setw(n)<< str << endl;
	}
	return 0;
}