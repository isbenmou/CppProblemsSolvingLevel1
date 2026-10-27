#include <iostream>

using namespace std;

void ReadNumbers(float &a, float &b)
{

    cout << "Please enter a?" << endl;
    cin >> a;

    cout << "Please enter b?" << endl;
    cin >> b;

}

float CalculRectangleArea(float a, float b)
{
    return a * b;
}

void PrintResult(float Area)
{

    cout << Area << endl;

}

int main()
{

    float a, b;

    ReadNumbers(a, b);
    PrintResult(CalculRectangleArea(a, b));

}
