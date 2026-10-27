#include <iostream>
#include <string>

using namespace std;

string ReadPinCode()
{

    string PinCode = "";

    cout << "Please enter Your Pin Code: " << endl;
    cin >> PinCode;

    return PinCode;
}

bool Logine()
{

    string PinCode;

    do
    {
        PinCode = ReadPinCode();

        if (PinCode == "1234")
        {
            return 1;
        }
        else
        {
            cout << "\nWrong PIN!" << endl;
            system("color 4F");
        }
    } while (PinCode != "1234");
    
}

void PrintResult()
{       
    Logine();
    system("color 2F");
    cout << "Your Balance is 7500" << endl;
}

int main()
{
    
    PrintResult();

    return 0;
}
