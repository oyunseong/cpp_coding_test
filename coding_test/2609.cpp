#include <iostream>
using namespace std;

// 최대 공약수
int gcd(int x, int y)
{
	int temp;
	while (y != 0)
	{
		temp = x % y;
		x = y;
		y = temp;
	}
	return x;
}

// 최대 공배수
int lcm(int x, int y)
{
	return x * y / gcd(x, y);
}


int main()
{
	int x, y;
	cin >> x >> y;

	cout << gcd(x, y) << endl;
	cout << lcm(x, y) << endl;



	return 0;
}