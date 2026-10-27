#include <iostream>

using namespace std;

int ReadN()
{

    int N;

    cout << "Please enter a N: " << endl;
    cin >> N;

    return N;
}

void PrintNumbersFrom1ToN_UsingWhileLoop(int N)
{

    cout << "## Print Numbers Using While Loop ##" << endl;

    int i = 1;

    while (i <= N)
    {

        cout << i << endl;

        i++;
    }

}

void PrintNumbersFrom1ToN_UsingdoWhileLoop(int N)
{

    cout << "## Print Numbers Using Do While Loop ##" << endl;

    int i = 1;

    do
    {
        cout << i << endl;
        i++;
    } while (!(i == N));

}

void PrintNumbersFrom1ToN_UsingForLoop(int N)
{

    cout << "## Print Numbers Using For Loop ##" << endl;

    for (int i = 1; i <= N; i++)
        cout << i << endl;

}

int main()
{

    int N = ReadN();

    PrintNumbersFrom1ToN_UsingWhileLoop(N);
    PrintNumbersFrom1ToN_UsingdoWhileLoop(N);
    PrintNumbersFrom1ToN_UsingForLoop(N);

    return 0;
}

