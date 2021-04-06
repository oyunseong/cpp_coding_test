#include <iostream>
using namespace std;

int main() {
	int A, B, V;
	cin >> A >> B >> V;
	int day = (V - A) / (A - B);
	int result=0;
	if ((V - A) % (A - B) == 0) {
		result =day + 1;
	}
	else {
		result= day + 2;
	}
	cout << result;

	return 0;
}
