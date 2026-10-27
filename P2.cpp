#include <iostream>
#include <string>

using namespace std;

void DisplayMyName(string FullName)
{
	cout << FullName << endl;
}

int main()
{

	string FullName;

	cout << "Please enter Your Name?" << endl;
	getline(cin, FullName);

	DisplayMyName(FullName);

}
