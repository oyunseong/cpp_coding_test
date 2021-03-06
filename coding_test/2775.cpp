#include <iostream>

using namespace std;

int getNum(int a, int b)
{
	if (b == 1)		// 1호일 경우!
		return 1;
	if (a == 0)	// 0층일 경우
		return b;
	return (getNum(a - 1, b) + getNum(a, b - 1));
}


int main()
{
	int T, a, b;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> a >> b;
		cout << getNum(a, b)<<endl;
	}

	return 0;
}