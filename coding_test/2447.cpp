// �����
//������� �������� ���� ��� ����.N�� 3�� �ŵ�����(3, 9, 27, ...)�̶�� �� ��, 
//ũ�� N�� ������ N��N ���簢�� ����̴�.
//ũ�� 3�� ������ ����� ������ �ְ�, 
//����� ������ ��� ĭ�� ���� �ϳ��� �ִ� �����̴�.
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


