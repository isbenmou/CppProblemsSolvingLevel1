#include <iostream>
#include <cmath>

using namespace std;

double RectangleAreaThroughDiagonal(int a, int d)
{
    return a * sqrt(pow(d, 2) - pow(a, 2));
}

int main()
{
    int a, d;

    cout << "Please enter the first number a?" << endl;
    cin >> a;

    cout << "Please enter the second number d?" << endl;
    cin >> d;

    cout << RectangleAreaThroughDiagonal(a, d) << endl;

}
