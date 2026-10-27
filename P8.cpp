#include <iostream>

using namespace std;

void ReadMark(float &Mark)
{

	cout << "Please enter your Mark: " << endl;
	cin >> Mark;

}
void DisplayResult(float Mark)
{
	if (Mark >= 50)
	{

		cout << "PASS" << endl;

	}
	else
	{

		cout << "Fail" << endl;

	}
}

int main()
{
	float Mark;

	ReadMark(Mark);
	DisplayResult(Mark);

	return 0;
}
