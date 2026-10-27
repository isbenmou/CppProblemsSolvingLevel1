#include <iostream>
#include <cmath>

using namespace std;

float ReadDiameter()
{

    float D;

    cout << "Please enter D?" << endl;
    cin >> D;

    return D;

}

float CircleAreaThroughDiameter(float D)
{
    const float PI = 3.141592653589793;
    return (PI * pow(D, 2)) / 4;
}

void PrintResult(float Area)
{

    cout << "\n Circle Area Through Diameter " << Area << endl;

}

int main()
{

    PrintResult(CircleAreaThroughDiameter(ReadDiameter()));

}
