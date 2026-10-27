#include <iostream>

using namespace std;

void SwapTwoNumbers(int *Number1, int *Number2)
{
    int swap = *Number1;
    *Number1 = *Number2;
    *Number2 = swap;
}

int main()
{
    int Number1, Number2;

    cout << "Please enter Number1 ?" << endl;
    cin >> Number1;

    cout << "Please enter Number2 ?" << endl;
    cin >> Number2;

    cout << Number1 << endl;
    cout << Number2 << endl;

    SwapTwoNumbers(&Number1, &Number2);

    cout << Number1 << endl;
    cout << Number2 << endl;

}
