#include <iostream>

using namespace std;

float ReadPositiveNumber(string message)
{

    float Number = 0;

    do
    {

        cout << message << endl;
        cin >> Number;

    } while (Number <= 0);

    return Number;
}

float CalculateTotalBill(float BillValue)
{

    float TotalBill = BillValue * 1.1;
    TotalBill = TotalBill * 1.16;

    return TotalBill;

}

void PrintResult(float Result)
{

    cout << "\n The Result is " << Result << endl;

}

int main()
{

    PrintResult(CalculateTotalBill(ReadPositiveNumber("Please enter a positive NUmber: ")));

}
