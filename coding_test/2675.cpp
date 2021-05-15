#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	char chr;
	for (int i = 0; i < T; i++)
	{
		int R;
		cin >> R;
		string str;
		cin >> str;
		for (int j = 0; j < str.length(); j++)
		{
			for (int k = 0; k < R; k++)
			{
				cout << str[j];
			}
		}
		cout << "\n";
	}



	return 0;
}