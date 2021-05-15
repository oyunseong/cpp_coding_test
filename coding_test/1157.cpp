#include <iostream>
#include <string>
using namespace std;

	//A : 65 
int main()
{
	string str;
	int max = 0;
	int count = 0;
	int k=0;
	char TF;
	int alpa[32] = { 0, };
	cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		str[i] = toupper(str[i]); // 대문자로 변환 	
		alpa[(int)str[i] - 65] += 1;
	}

	for (int i = 0; i < 32; i++)
	{
		if (max < alpa[i]){
			max = alpa[i];
			count = i;
		}
	}
	for (int i = 0; i < 32; i++)
	{
		if (max == alpa[i]){
			k++;
		}
	}
	if (k == 1) cout << char(count + 65);
	else cout << "?";
	
	
	return 0;
}