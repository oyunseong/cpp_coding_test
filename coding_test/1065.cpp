#include <iostream>
using namespace std;

bool hansoo(int x)
{
	// ���ڸ� ���ϴ� ������ �Ѽ�
	if (x < 100)
		return true;
	// ���ڸ����ʹ� üũ�ؾ��Ѵ�
	int x1, x2, x3;	// x1,x2,x3�� 1~3��° �ڸ����� �ǹ�
	x3 = x / 100;
	x2 = x % 100 / 10;
	x1 = x % 10;
	if (x3 - x2 == x2 - x1)	// ������ ���ٸ� true ��ȯ
		return true;
	return false;	// �ƴϸ� false��ȯ
}


int main()
{
	int n, count = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		// n�� ���ڱ��� 1�� �����ϸ鼭 üũ
		if (hansoo(i))	// true ��ȯ�� count 1����
			count++;
	}
	cout << count;
	return 0;
}