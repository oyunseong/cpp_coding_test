#include <iostream>
using namespace std;

int main()
{
	long long r, c, n;
	long long r_cctv = 0, c_cctv = 0;
	cin >> r >> c >> n;

	if (r <= n) { r_cctv = 1; }
	else {
		if (r % n != 0) {
			r_cctv = (r / n) + 1;
		}
		else {
			r_cctv = r / n;
		}
	}
	if (c <= n) { c_cctv = 1; }

	else {
		if (c % n != 0) {
			c_cctv = (c / n) + 1;
		}
		else {
			c_cctv = c / n;
		}
	}
	cout << r_cctv * c_cctv;
	return 0;
}