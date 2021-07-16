#include <iostream>
using namespace std;

static int a = 1, b = 0;

int main()
{
	int n;
	int temp = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		temp = b;
		b = a + b;
		a = temp;
		
	}
	cout << a << " " << b;
	return 0;
}