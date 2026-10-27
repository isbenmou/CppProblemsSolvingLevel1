#include <iostream>
#include <cmath>

using namespace std;

float ReadNumber()
{

    float L;

    cout << "Please enter L?" << endl;
    cin >> L;
    return L;

}

float CircleAreaAlongTheCircumference(float L)
{
    const float PI = 3.14;
    return pow(L, 2) / (4 * PI);
}

void PrintResult(float Area)
{

    cout << "\n Circle Area Along The Circum ference is " << Area << endl;

}

int main()
{

    PrintResult(CircleAreaAlongTheCircumference(ReadNumber()));

}
 
