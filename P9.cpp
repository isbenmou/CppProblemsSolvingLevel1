#include <iostream>
#include <string>

using namespace std;

void ReadNumbers(int &Number1, int &Number2, int &Number3)
{

    cout << "Please enter number1 ?" << endl;
    cin >> Number1;

    cout << "Please enter number2 ?" << endl;
    cin >> Number2;

    cout << "Please enter number3 ?" << endl;
    cin >> Number3;

}

int CalculateSumNumbers(int Number1, int Number2, int Number3)
{

    int Result = Number1 + Number2 + Number3;

    return Result;

}

string GetResult(int Number1, int Number2, int Number3)
{

    string Result = "\n the sum of " + to_string(Number1) + " + " + to_string(Number2) + " + " + to_string(Number3) + " is " + to_string(CalculateSumNumbers(Number1, Number2, Number3));
    return Result;

}

void PrintResult(string Result)
{

    cout << Result << endl;

}

int main()
{
    int Number1, Number2, Number3;

    ReadNumbers(Number1, Number2, Number3);
    PrintResult(GetResult(Number1, Number2, Number3));

}

