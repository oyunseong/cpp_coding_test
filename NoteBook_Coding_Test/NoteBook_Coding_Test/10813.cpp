#include <iostream>

using namespace std;

int main()
{
	int N = 0, M = 0;
	int a, b;
	int temp;
	cin >> N>> M;

	int* arr = new int[N + 1];

	for (int i = 0; i <= N; i++)
	{
		arr[i] = i;
	}
	for (int i = 0; i < M; i++)
	{
		cin >> a >> b;
		temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
	}

	for (int i = 1; i <= N; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;

}