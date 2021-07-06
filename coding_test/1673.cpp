#include <iostream>
using namespace std;
int main()
{
	long long  n, k;
	while ((cin >> n >> k)) {
		long long  sum = 0;
		while (n != 0)
		{
			sum += n;
			n = n / k;
		}
		cout << sum << endl;
	}
	return 0;
}




//#include <iostream>
//using namespace std;
//int main()
//{
//	long long n, k;
//	while (cin >> n >> k) {
//
//		long long sum = 0, coupon = n, stamp = 0;
//		while (coupon)
//		{
//			sum += coupon;
//			stamp += coupon;
//			coupon = 0;
//			coupon += stamp / k;
//			stamp = stamp % k;
//		}
//		cout << sum;
//	}
//	return 0;
//}

