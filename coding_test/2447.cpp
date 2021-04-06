// 별찍기
//재귀적인 패턴으로 별을 찍어 보자.N이 3의 거듭제곱(3, 9, 27, ...)이라고 할 때, 
//크기 N의 패턴은 N×N 정사각형 모양이다.
//크기 3의 패턴은 가운데에 공백이 있고, 
//가운데를 제외한 모든 칸에 별이 하나씩 있는 패턴이다.
#include <iostream>
using namespace std;

void star(int i, int j, int num)
{
	if ((i / num) % 3 == 1 && (j / num) % 3 == 1)
	{
		cout << ' ';
	}
	else
	{
		if (num / 3 == 0)
			cout << '*';
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << '*';
	}
	cout << "\n";
	for (int i = 0; i < n; i++) {
		if (i % 3 == 1)
		{

		}
	}
	return 0;
}


