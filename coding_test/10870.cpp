#include <iostream>
using namespace std;

int Fibo(int num) {
	int result = 0;
	if (num == 0) {
		return 0;
	}
	else if (num == 1) {
		return 1;
	}
	else {
		return Fibo(num - 1) + Fibo(num - 2);
	}
}

int main() {
	int num;
	cin >> num;
	cout << Fibo(num);


}