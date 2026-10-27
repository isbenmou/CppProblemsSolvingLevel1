#include <iostream>

using namespace std;

void ReadMarks(int Marks[3])
{

    cout << "Please enter Mark1: " << endl;
    cin >> Marks[0];

    cout << "Please enter Mark2: " << endl;
    cin >> Marks[1];

    cout << "Please enter Mark3: " << endl;
    cin >> Marks[2];

}

int SumOf3Numbers(int Marks[3])
{

    return (Marks[0] + Marks[1] + Marks[2]);

}

float AvgOfMarks(int Marks[3])
{

    return (float)SumOf3Numbers(Marks) / 3;

}

void PrintAvg(int Avg)
{

    cout << "\n the Avg of Marks is " << Avg << endl;

}

int main()
{
    int Marks[3];

    ReadMarks(Marks);
    PrintAvg(AvgOfMarks(Marks));
}

