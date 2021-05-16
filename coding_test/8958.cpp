#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int count = 0;
	int sum = 0;
	string str;

	for (int i = 0; i < n; i++)
	{
		cin >> str;
		sum = 0;
		count = 0;
		for (int j = 0; j < str.length(); j++) {
			if (str[j] == 'O') {
				count++;
			}else {
				count = 0;
			}
			sum += count;
		}
		cout << sum<<endl;
		
	}
	
	return 0;
}