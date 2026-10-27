#include <iostream>

using namespace std;

float ReadNumber(string message)
{

    float Number = 0;

    cout << message << endl;
    cin >> Number;

    return Number;
}

float CalculatePayRemainder(float CashPaid, float TotalBill)
{

    return (CashPaid - TotalBill);

}

void PrintResult(float Result)
{

    cout << "\n The Result is " << Result << endl;

}

int main()
{

    PrintResult(CalculatePayRemainder(ReadNumber("Please enter the Cash Paid: "), ReadNumber("Please enter the Total Paid: ")));

}

