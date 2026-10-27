#include <iostream>

using namespace std;

short ReadAge()
{

    unsigned short Age;

    cout << "Please enter your Age: " << endl;
    cin >> Age;

    return Age;
}

bool ValidateNumberInRange(int Number, int From, int To)
{

    return (Number >= From && Number <= To);

}

void PrintResult(short Age)
{

    if (ValidateNumberInRange(Age, 18, 45) == true)
    {
        cout << Age << " is Valid Age" << endl;
    }
    else
    {
        cout << Age << " is Invalid Age" << endl;
    }
}

int main()
{

    PrintResult(ReadAge());

    return 0;
}

