#include <iostream>
using namespace std;

int main()
{
	int asc[8] = { 1,2,3,4,5,6,7,8 };
	int des[8] = { 8,7,6,5,4,3,2,1 };
	int arr[8];
	int a = 0, b = 0;
	for (int i = 0; i < 8; i++)
	{
		cin >> arr[i];
	}


	for (int i = 0; i < 8; i++)
	{
		if (arr[i] == asc[i]) { 
			++a;
		}
		else if (arr[i] == des[i]) {
			++b;
		}
	}
	if (a == 8) cout << "ascending" << endl;
	else if (b == 8) cout << "descending" << endl;
	else cout << "mixed" << endl;


	return 0;
}