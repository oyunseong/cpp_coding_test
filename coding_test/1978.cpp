#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int* number = new int[n];
	int count = 0;
	int result = 0;

	try {
		if (n > 100) throw n;

		for (int i = 0; i < n; i++)
		{
			cin >> number[i];
			// 1부터 입력된 숫자까지 나누면서 나눠 떨어진다면 
			// count++ 
			// 그래서 카운터가 2라면 1과 자기자신만 나눠떨어지므로 소수
			for (int j = 1; j <= number[i]; j++) {
				if (number[i] % j == 0)
				{
					count++;
				}
			}

			if (count == 2){
				result++;	// 소수라면 +1
			}
			count = 0;	// count 초기화
		}

		cout << result;
	}

	catch (int exception) {
		cout << "100 이상입니다. " << n;
	}
	return 0;
}