#include <iostream>

using namespace std;

void ReadNumbers(float &A, float &H)
{

    cout << "Please Enter a?" << endl;
    cin >> A;

    cout << "Please enter b?" << endl;
    cin >> H;

}

float TriangleArea(float A, float H)
{

    return (A / 2) * H;

}

void PrintResult(float Area)
{

    cout << "\n Triangle Area is " << Area << endl;

}

int main()
{
    float A, H;

    ReadNumbers(A, H);
    PrintResult(TriangleArea(A, H));

}

