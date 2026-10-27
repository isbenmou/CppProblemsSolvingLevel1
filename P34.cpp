#include <iostream>

using namespace std;

float ReadTotalSales()
{

    float TotalSales;

    cout << "Please enter the total sales: " << endl;
    cin >> TotalSales;

    return TotalSales;
}

float GetCommissionPercentage(float TotalSales)
{

    if (TotalSales > 1000000)
    {

        return 0.01;

    }
    else if (TotalSales > 499999)
    {

        return 0.02;

    }
    else if (TotalSales > 99999)
    {

        return 0.03;

    }
    else if (TotalSales > 49999)
    {

        return 0.05;

    }

    else
    {

        return 0;

    }
}

float CalculCommission(float TotalSales)
{
    return GetCommissionPercentage(TotalSales) * TotalSales;
}

void PrintCommission(float Commission)
{

    cout << Commission << endl;

}

int main()
{

    float TotalSales = ReadTotalSales();
    PrintCommission(CalculCommission(TotalSales));

    return 0;
}
