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
    int Counter = 0;

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
            Counter++;
        }
    } while (PinCode != "1234" && Counter != 3);

    return 0;
}

void PrintResult()
{       
    if (Logine())
    {
        system("color 2F");
        cout << "Your Balance is 7500" << endl;
    }
    else
    {
        cout << "Your Account Is Locked!" << endl;
    }
}

int main()
{
    
    PrintResult();

    return 0;
}

