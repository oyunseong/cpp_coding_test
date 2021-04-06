// 문제
// N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

#include <iostream>
#include <vector>

using namespace std;
int main(void)
{
	int n, temp=0;
	cin >> n;
	int* arr;
	arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		/*if (i + 1 < n && arr[i] == arr[i + 1])
			continue;*/
		cout << arr[i] <<endl;
	}

	delete[] arr;
	return 0;
}