#include <iostream>

using namespace std;

int ReadPositifeNumber(string message)
{

    int Number = 0;

    do
    {

        cout << message << endl;
        cin >> Number;

    } while (Number < 0);

    return Number;
}

int CalulateFactorialOfN(int N)
{

    int Factorial = N;

    for (int i = 1; i < N; i++)
        Factorial *= i;

    return Factorial;
}

void PrintResult(int Number, int Factorial)
{

    cout << "Factorial Of " << Number << " is " << Factorial << endl;

}

int main()
{

    int Number = ReadPositifeNumber("Please enter a Positife Number ???");

    PrintResult(Number, CalulateFactorialOfN(Number));

    return 0;
}

