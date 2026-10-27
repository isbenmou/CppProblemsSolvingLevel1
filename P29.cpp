#include <iostream>

using namespace std;

enum enOddEven {ODD=1, EVEN=2};

int ReadN()
{

    int N;

    cout << "Please enter a N: " << endl;
    cin >> N;

    return N;
}

enOddEven CheckOddOrEven(int Num)
{

    if (Num % 2 != 0)
        return enOddEven::ODD;
    else
        return enOddEven::EVEN;

}

int SumEvenNumbersFrom1ToN_UsingWhileLoop(int N)
{

    cout << "## Print Numbers Using While Loop ##" << endl;

    int i = 1;
    int Sum = 0;

    while (i <= N)
    {
        if (CheckOddOrEven(i) == enOddEven::EVEN)
            Sum += i;
        i++;
    }

    return Sum;
}

int SumEvenNumbersFrom1ToN_UsingdoWhileLoop(int N)
{

    cout << "## Print Numbers Using Do While Loop ##" << endl;

    int i = 1;
    int Sum = 0;

    do
    {
        if (CheckOddOrEven(i) == enOddEven::EVEN)
            Sum += i;
        i++;
    } while (!(i == N));

    return Sum;
}

int SumEvenNumbersFrom1ToN_UsingForLoop(int N)
{

    cout << "## Print Numbers Using For Loop ##" << endl;

    int Sum = 0;

    for (int i = 1; i <= N; i++)
    {
        if (CheckOddOrEven(i) == enOddEven::EVEN)
            Sum += i;
    }

    return Sum;
}

void PrintResult(int Sum)
{

    cout << "Sum Is " << Sum << endl;

}

int main()
{

    int N = ReadN();

    PrintResult(SumEvenNumbersFrom1ToN_UsingWhileLoop(N));
    PrintResult(SumEvenNumbersFrom1ToN_UsingdoWhileLoop(N));
    PrintResult(SumEvenNumbersFrom1ToN_UsingForLoop(N));

    return 0;
}

