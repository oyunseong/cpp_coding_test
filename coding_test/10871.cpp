#include <iostream>
using namespace std;


int main() {
	int num, min;
	int k = 0;
	cin >> num >> min;
	int* arr = new int[num];

	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < num; i++)
	{
		if (arr[i] < min)
			cout << arr[i] << " ";
	}
	

	return 0;
}