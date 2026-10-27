#include <iostream>
#include <cmath>

using namespace std;

void ReadNumbers(int &A, int &B, int &C)
{

    cout << "Please enter A: " << endl;
    cin >> A;

    cout << "Please enter B: " << endl;
    cin >> B;

    cout << "Please enter C: " << endl;
    cin >> C;

}

float CircleAreaTriangle(int A, int B, int C)
{
    float p = (A + B + C) / 2;
    const float PI = 3.14;
    float T = ((A * B * C) / (4 * sqrt(p * (p - A) * (p - B) * (p - C))));
    return PI * pow(T, 2);
}

void PrintResult(float Area)
{

    cout << "\n Circle Area is " << Area << endl;

}

int main()
{

    int A, B, C;

    ReadNumbers(A, B, C);
    PrintResult(CircleAreaTriangle(A, B, C));

    return 0;
}

