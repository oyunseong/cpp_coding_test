#include <iostream>
using namespace std;

int Factorial(int n) {
	int result;
	if (n == 0)
		return 1;
	result = n * Factorial(n - 1);
	return result;
}

int main()
{
	int i;
	cin >> i;
	cout << Factorial(i)<<"\n";
		
	return 0;
}