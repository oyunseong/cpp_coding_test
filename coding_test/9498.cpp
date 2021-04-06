#include <iostream>
using namespace std;

int main()
{
	int score;
	cin >> score;

	try {
		if (score < 0 || score > 100) throw score;
		
		if (score >= 90 && score <= 100)
		{
			cout << "A";
		}
		else if (score >= 80 && score <= 89)
		{
			cout << "B";
		}
		else if (score >= 70 && score <= 79)
		{
			cout << "C";
		}
		else if (score >= 60 && score <= 69)
		{
			cout << "D";
		}
		else
		{
			cout << "F";
		}
	}
	catch (int exception)
	{
		cout << "scoreÀÇ ¹üÀ§°¡ ¹þ¾î³³´Ï´Ù." << score << endl;
	}

	return 0;
}