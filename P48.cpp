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

float TotalMonths(float LoanMounth, float MonthlyPayment)
{

    return LoanMounth / MonthlyPayment;

}

void PrintResult(float Result)
{

    cout << Result << endl;

}

int main()
{
    float LoanMounth = ReadPositiveNumber("Please enter the Loan Month ?");
    float ManyMonth = ReadPositiveNumber("Please enter the Many Mounth?");

    PrintResult(TotalMonths(LoanMounth, ManyMonth));
}

