#include <iostream>
#include <string>

using namespace std;

enum enPrimeOrNotPrime {Prime = 1, NotPrime = 2};

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

enPrimeOrNotPrime CheckPrimeNumber(int Number)
{

    for (int Count = 2; Count <= Number / 2; Count++)
    {
        if (Number % Count == 0)
            return enPrimeOrNotPrime::NotPrime;
    }

    return enPrimeOrNotPrime::Prime;
}

void PrintMessage(enPrimeOrNotPrime Number)
{

    if (Number == enPrimeOrNotPrime::Prime)
        cout << "\n Prime Number" << endl;
    else
        cout << "\n Not Prime Number" << endl;

}

int main()
{

    PrintMessage(CheckPrimeNumber(ReadPositiveNumber("Please enter a Number: ")));

    return 0;
}
