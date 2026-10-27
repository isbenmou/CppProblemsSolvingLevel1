#include <iostream>

using namespace std;

short ReadAge()
{

    short Age;

    cout << "Please enter your Age: " << endl;
    cin >> Age;

    return Age;
}

bool ValidateNumberInRange(int Number, int From, int To)
{

    return (Number >= From && Number <= To);

}

int ReadAgeUntilCondition(int From, int To)
{

    int Number = 0;

    do
    {

        Number = ReadAge();

    }
    while (!ValidateNumberInRange(Number, From, To));

    return Number;
}

void PrintResult(short Age)
{

    cout << "\n Your Age is " << Age << endl;
    
}

int main()
{

    PrintResult(ReadAgeUntilCondition(18, 45));

    return 0;
}
