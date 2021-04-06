// 숫자의 개수
#include <iostream>
using namespace std;

int main()
{
	int a, b, c, count=0, sum =0;
	int tmp;
	int arr[10] = { 0, };
	cin >> a >> b >> c;
	sum = a * b * c;

	
	try {
		if (a < 100 || a > 1000 || b > 1000 || b < 100 || c > 1000 || c < 100) throw NULL;
		
		tmp = sum;
		// 10씩 나누면서 안나눠질 때까지 1씩 더함
		while (tmp != 0)
		{
			tmp = tmp / 10;
			count++;
		}
		
		
		for (int i = 0; i < count; i++)
		{
			arr[sum % 10] += 1;
			sum /= 10;
		}
		
		
		for (int i = 0; i < 10; i++)
		{
			cout << arr[i] << endl;
		}
	}
	catch (int exception){
		std::cout << "범위를 초과합니다.";
	}
	
	return 0;
}