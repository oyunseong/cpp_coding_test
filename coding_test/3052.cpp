#include <iostream>
using namespace std;

int main()
{	
	int n;
	int arr[42] = { 0, };
	int k=0;
	for (int i = 0; i < 10; i++)
	{
		cin >> n;
		arr[n % 42] = 1;
	}
	for (int i = 0; i < 42; i++)
	{
		k += arr[i];
	}
	cout << k;


	return 0;
}