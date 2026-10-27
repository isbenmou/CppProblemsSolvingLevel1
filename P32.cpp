#include <iostream>

using namespace std;

void ReadNumberAndM(int& Number, int& M)
{

    cout << "Please enter Number: " << endl;
    cin >> Number;

    cout << "Please enter M: " << endl;
    cin >> M;

}

int CalculatePowerOfM(int Number, int M)
{

    int result = 1, i = 1;

    while (i <= M)
    {
        
        result = result * Number;
        
        i++;
    }

    return result;
}

void DisplayPowerOfM(int power)
{

    cout << "the Power Of M is " << power << endl;

}

int main()
{

    int Number, M;

    ReadNumberAndM(Number, M);
    DisplayPowerOfM(CalculatePowerOfM(Number, M));

    return 0;
}
