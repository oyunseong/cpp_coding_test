#include <iostream>
using namespace std;

int main()
{
	int n;
	double sum = 0;
	cin >> n;
	double* arr = new double [n] ;
	double max=0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (max < arr[i]) max = arr[i];
		sum += arr[i];
	}
	sum = (sum / max * 100) / n;
	cout << fixed;
	cout.precision(6);
	cout << sum;
	return 0;
}