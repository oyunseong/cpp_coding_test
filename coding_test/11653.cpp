#include <iostream>
using namespace std;

int main()
{
	int N;
	float remainder = 0;
	cin >> N;
	

	while (1) {
		if (N % 2 == 0)
		{
			N /= 2;
			cout << 2<<endl;
		}
		else if (N % 3 == 0)
		{
			{
				N /= 3;
				cout << 3 << endl;
			}
		}
		else if (N % 5 == 0)
		{
			{
				N /= 5;
				cout << 5 << endl;
			}
		}
		else if (N % 7 == 0)
		{
			{
				N /= 7;
				cout << 7 << endl;
			}
		}
		if (N == 1) return 0;
	}


	return 0;
}