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
			// 1���� �Էµ� ���ڱ��� �����鼭 ���� �������ٸ� 
			// count++ 
			// �׷��� ī���Ͱ� 2��� 1�� �ڱ��ڽŸ� �����������Ƿ� �Ҽ�
			for (int j = 1; j <= number[i]; j++) {
				if (number[i] % j == 0)
				{
					count++;
				}
			}

			if (count == 2){
				result++;	// �Ҽ���� +1
			}
			count = 0;	// count �ʱ�ȭ
		}

		cout << result;
	}

	catch (int exception) {
		cout << "100 �̻��Դϴ�. " << n;
	}
	return 0;
}