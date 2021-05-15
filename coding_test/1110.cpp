#include <iostream>
using namespace std;

int check(int num)
{
	int k = 0;
	int temp = 0;
	int sum = 0;
	temp = num;
	while (1) {
		int first = temp / 10;
		int second = temp % 10;
		sum = (first + second);
		temp = (second * 10) + (sum % 10);
		k++;
		if (num == temp) break;
	}
	return k;
}

int main()
{
	int n;
	cin >> n;
	int a = check(n);
	cout << a;
	
	

	return 0;
}