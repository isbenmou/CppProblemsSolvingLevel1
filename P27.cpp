#include <iostream>

using namespace std;

void ReadN(int& N)
{

    cout << "Please enter a N: " << endl;
    cin >> N;

}

void PrintNumberFromNto1(int N)
{

    for (; N >= 1; N--)
    {
        cout << N << endl;
    }

}

int main()
{
    int N;

    ReadN(N);
    PrintNumberFromNto1(N);

    return 0;
}

