#include <iostream>
#include <string>

using namespace std;

float ReadNumber(string message)
{

    float Number;

    cout << message << endl;
    cin >> Number;

    return Number;
}

float SumNumbers()
{

    float Number = 0, Sum = 0;
    int counter = 1;

    do 
    {
        Number = ReadNumber("Please enter a Number " + to_string(counter));
        if (Number == -99)
            break;
        Sum += Number;
    } while (Number != -99);

    return Sum;
}

void PrintSum(int Sum)
{

    cout << "the sum of Numbers is " << Sum << endl;

}

int main()
{

    PrintSum(SumNumbers());

}

