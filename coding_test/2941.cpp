#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<string> croatian = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	int idx;
	string str;
	cin >> str;
	for (int i = 0; i < croatian.size(); i++)
	{
		while (1)
		{
			// find�Լ��� ���� �˻��ϰ� ������� npos�� ���� ������, ��� ���ڿ��� �������ش� 
			idx = str.find(croatian[i]);
			if (idx == string::npos)
				break;
			// ��ġ���� �ʴ� ���ڿ��� #���� �������ص� ���ڿ��� ���̸� ��ȯ
			str.replace(idx, croatian[i].length(), "#");
		}
	}
	cout << str.length();
	
	return 0;
}