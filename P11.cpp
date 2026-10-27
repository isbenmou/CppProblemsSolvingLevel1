#include <iostream>

using namespace std;

enum enPassFail {Pass = 1, Fail = 2};

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

enPassFail CheckAvg(float Avg)
{

    if (Avg >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;

}

void PrintResult(float Avg)
{

    if (CheckAvg(Avg) == enPassFail::Pass)
        cout << "\n Your Result is Pass" << endl;
    else
        cout << "\n Your Result is Fail" << endl;

}

int main()
{
    int Marks[3];

    ReadMarks(Marks);
    PrintResult(AvgOfMarks(Marks));

    return 0;
}
