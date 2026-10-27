#include <iostream>
#include <cmath>

using namespace std;

void ReadNumbers(float &A, float &B)
{

    cout << "Please enter a?" << endl;
    cin >> A;

    cout << "Please enter b?" << endl;
    cin >> B;

}

float CircleAreaInscribedInAnIsoscelesTriangle(float A, float B)
{
    const float PI = 3.141592653589793;
    float R = (2 * A - B) / (2 * A + B);
    return PI * (pow(B, 2) / 4) * R;
}

void PrintResult(float Area)
{

    cout << "\n Circle Area Inscribed In An Isosceles Triangle is " << Area << endl;

}

int main()
{

    float A, B;

    ReadNumbers(A, B);
    PrintResult(CircleAreaInscribedInAnIsoscelesTriangle(A, B));

}

