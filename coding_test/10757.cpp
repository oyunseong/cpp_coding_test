#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string Add(string& s1, string& s2)
{
	
	//_NODISCARD constexpr const _Ty& (max)(const _Ty & _Left, const _Ty & _Right, _Pr _Pred)
	// left, right, pred�� ���ڷ� �޾Ƽ� �ִ��� ã���ϴ�.
	// pred :A binary predicate used to compare the two objects.
	// �� ��ü�� ���ϴ� �� ���Ǵ� ���� �����Դϴ�.
	string result(max(s1.size(), s2.size()),'0');	// �� �� ���� result�� �����ϱ�
	bool carry = false;

	for (int i = 0; i < result.size(); i++)
	{
		int temp = carry;
		carry = false;

		if (i < s1.size()) 
			temp += s1[s1.size() - i - 1] - '0';
		if (i < s2.size()) 
			temp += s2[s2.size() - i - 1] - '0';
		if (temp >= 10)
		{
			carry = true;
			temp -= 10;
		}
		result[result.size() - i - 1] = temp + '0';
	}
	if (carry) result.insert(result.begin(), '1');
	return result;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string a, b;
	cin >> a >> b;

	string result = Add(a, b);
	cout << result;

	return 0;
}