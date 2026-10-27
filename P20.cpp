#include <iostream>
#include <cmath>

using namespace std;

float ReadSquareSide()
{

    float A;

    cout << "Please eneter A?" << endl;
    cin >> A;

    return A;
}

float CircleAreaInscribedInASquare(float A)
{
    const float PI = 3.141592653589793;
    return (PI * pow(A, 2)) / 4;
}

void PrintResult(float Area)
{

    cout << "\n Circle Area Inscribed In A Square is " << Area << endl;

}

int main()
{

    PrintResult(CircleAreaInscribedInASquare(ReadSquareSide()));

}
