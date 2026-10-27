#include <iostream>

using namespace std;

enum enOpType { Add = '+' , Subtract = '-', Multiply = '*', Dived = '/' };

float ReadNumber(string message)
{

    float Number;

    cout << message << endl;
    cin >> Number;

    return Number;
}

enOpType ReadOperationType()
{

    char OT = '+';

    cout << "Please enter the Operation Type: " << endl;
    cin >> OT;

    return (enOpType)OT;
}

float Calculate(float Number1, float Number2, enOpType OperationType)
{

    int DefRet = Number1 + Number2;

    switch (OperationType)
    {

    case enOpType::Add:
        return DefRet;
    case enOpType::Subtract:
        return Number1 - Number2;
    case enOpType::Multiply:
        return Number1 * Number2;
    case enOpType::Dived:
        return Number1 / Number2;
    default:
        return DefRet;
    }

}

void PrintResult(float Result)
{

    cout << "\n The Result is " << Result << endl;

}

int main()
{
    
    float Number1 = ReadNumber("Please enter the Number1: ");
    float Number2 = ReadNumber("Please enter the Number2: ");
    enOpType OpeartionType = ReadOperationType();
    PrintResult(Calculate(Number1, Number2, OpeartionType));

    return 0;
}
