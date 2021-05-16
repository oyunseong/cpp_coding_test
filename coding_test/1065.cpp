#include <iostream>
using namespace std;

bool hansoo(int x)
{
	// 두자리 이하는 무조건 한수
	if (x < 100)
		return true;
	// 세자리부터는 체크해야한다
	int x1, x2, x3;	// x1,x2,x3는 1~3번째 자리수를 의미
	x3 = x / 100;
	x2 = x % 100 / 10;
	x1 = x % 10;
	if (x3 - x2 == x2 - x1)	// 공차가 같다면 true 반환
		return true;
	return false;	// 아니면 false반환
}


int main()
{
	int n, count = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		// n번 숫자까지 1씩 증가하면서 체크
		if (hansoo(i))	// true 반환시 count 1증가
			count++;
	}
	cout << count;
	return 0;
}