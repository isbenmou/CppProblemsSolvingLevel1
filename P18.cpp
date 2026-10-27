#include <iostream>
#include <cmath>

using namespace std;

void ReadNumber(float &R)
{

    cout << "Please Enter r: " << endl;
    cin >> R;

}

float CircleArea(int R)
{
    const float PI = 3.141592653589793;
    return PI * pow(R, 2);
}

void PrintResult(float Area)
{

    cout << "\n Circle Area is " << Area << endl;

}

int main()
{

    float R;

    ReadNumber(R);
    PrintResult(CircleArea(R));

}

