#include <iostream>
#include <cmath>

using namespace std;

void CalculPower(int Number)
{
    cout << pow(Number, 2) << endl;
    cout << pow(Number, 3) << endl;
    cout << pow(Number, 4) << endl;
}

int main()
{

    int Number;

    cout << "Please enter Your Number?" << endl;
    cin >> Number;

    CalculPower(Number);
}
