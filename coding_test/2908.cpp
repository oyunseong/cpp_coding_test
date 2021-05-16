#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int a1, a2, a3;
	a1 = a % 10;
	a2 = a % 100 /10;
	a3 = a / 100;
	int b1, b2, b3;
	b1 = b % 10;
	b2 = b % 100 / 10;
	b3 = b / 100;

	if (a1 > b1)
	{
		cout << a1 * 100 + a2 * 10 + a3;
	}
	else if (b1 > a1)
	{
		cout << b1 * 100 + b2 * 10 + b3;
	}
	else
	{
		if (a2 > b2)
		{
			cout << a1 * 100 + a2 * 10 + a3;
		}
		else if (b2 > a2)
		{
			cout << b1 * 100 + b2 * 10 + b3;
		}
		else
		{
			if (a3 > b3)
			{
				cout << a1 * 100 + a2 * 10 + a3;
			}
			else {
				cout << b1 * 100 + b2 * 10 + b3;
			}
		}
	}
	return 0;
}