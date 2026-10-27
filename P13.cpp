#include <iostream>

using namespace std;

void ReadNumbers(int &Number1, int &Number2, int &Number3)
{

    cout << "Please enter the Number 1: " << endl;
    cin >> Number1;

    cout << "Please enter the Number 2: " << endl;
    cin >> Number2;

    cout << "Please enter the Number 3: " << endl;
    cin >> Number3;

}

int MaxOf3Numbers(int Number1, int Number2, int Number3)
{

    if (Number1 > Number2)
    {
        if (Number1 > Number3)
            return Number1;
        else
            return Number3;
    }
    else
    {
        if (Number2 > Number3)
            return Number2;
        else
            return Number3;
    }

}

void PrintMaxNumber(int Number)
{

    cout << "The Maximum Number is " << Number << endl;

}

int main()
{

    int Number1, Number2, Number3;

    ReadNumbers(Number1, Number2, Number3);
    PrintMaxNumber(MaxOf3Numbers(Number1, Number2, Number3));

    return 0;
}

