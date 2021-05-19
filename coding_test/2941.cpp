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
			// find함수를 통해 검색하고 결과값이 npos가 나올 때까지, 모든 문자열을 변경해준다 
			idx = str.find(croatian[i]);
			if (idx == string::npos)
				break;
			// 일치하지 않는 문자열을 #으로 변경해준뒤 문자열의 길이를 반환
			str.replace(idx, croatian[i].length(), "#");
		}
	}
	cout << str.length();
	
	return 0;
}