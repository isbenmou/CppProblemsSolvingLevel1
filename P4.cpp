#include <iostream>

using namespace std;

struct stEmployee
{
	unsigned short Age;
	bool HasDriverLicense;
};

void ReadEmployeeInfo(stEmployee &Employee)
{
	
	cout << "Please enter your age:" << endl;
	cin >> Employee.Age;

	cout << "Has a driver license ?" << endl;
	cin >> Employee.HasDriverLicense;

}

void canWork(stEmployee Employee)
{
	
	bool Result = (Employee.Age > 21 && Employee.HasDriverLicense == true);

	if (Result == true)
	{

		cout << "Hired" << endl;

	}
	else
	{
		
		cout << "Rejected" << endl;

	}

}

int main()
{
	stEmployee Employee;

	ReadEmployeeInfo(Employee);
	canWork(Employee);

	return 0;
}
