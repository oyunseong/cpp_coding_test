#include <iostream>
using std::cout;
using std::cin;

int main()
{
	int n, m, mod, sum;
	cin >> n;
	m = n / 5; // 5kg봉지의 사용 최대 개수
	while (m >= 0)
	{
		mod = 0;
		sum = 0;
		if (m > 0)
		{
			mod = n - 5 * m;
			sum = m;
		}
		else
		{
			mod = n;
		}
		sum += mod / 3;
		mod %= 3;

		if (mod == 0)
		{
			cout << sum;
			break;
		}
		m--;
	}
	if (mod != 0)
		cout << -1;
	

	return 0;
}