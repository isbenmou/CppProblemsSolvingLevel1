#include <iostream>

using namespace std;

void ReadN(int& N)
{

    cout << "Please enter a N: " << endl;
    cin >> N;

}

int CalculateSumOddNumbers(int N)
{

    int Sum = 0, i = 1;

    while (i <= N)
    {

        Sum += i;

        i++;
    }

    return Sum;
}

void PrintSumOddNumbers(int Sum)
{

    cout << "The Sum Of Odd Numbers From 1 to N is " << Sum << endl;

}

int main()
{

    int N;

    ReadN(N);
    int Sum = CalculateSumOddNumbers(N);
    PrintSumOddNumbers(Sum);

    return 0;
}

