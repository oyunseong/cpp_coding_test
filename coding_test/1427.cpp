// ��Ʈ�λ��̵�
// �迭�� �����ϴ� ���� ����. ���� �־�����, �� ���� �� �ڸ����� ������������ �����غ���.
// �Է� : ù° �ٿ� �����ϰ����ϴ� �� N�� �־�����. N�� 1,000,000,000���� �۰ų� ���� �ڿ����̴�.
// ��� :ù° �ٿ� �ڸ����� ������������ ������ ���� ����Ѵ�.

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
#include <cstring>

using namespace std;

char arr[10];

int main()
{
	cin >> arr;

	sort(arr, arr + strlen(arr), greater<int>());
	for (int i = 0; i < strlen(arr); i++)
	{
		cout << arr[i];
	}
	
	
	return 0;
}