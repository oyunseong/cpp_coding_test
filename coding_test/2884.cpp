// 알람 시계
#include <iostream>
using namespace std;

int main()
{
	int h, m;
	cin >> h >> m;
	int m2 = m - 45;

	if (m2 < 0) {

		m2 = 60 + m2;
		if (h == 0 || h == 24)
			h = 23;	// 
		else
			h = h - 1;
	}

	cout << h << " " << m2;

	return 0;
}