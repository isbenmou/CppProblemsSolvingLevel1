#include <iostream>
#include <string>

using namespace std;

struct stTimeDuration
{

    int Days, Hours, Minutes, Seconds;

};

int ReadPositiveNumber(string message)
{

    int Number = 0;

    do
    {

        cout << message << endl;
        cin >> Number;

    } while (Number <= 0);

    return Number;
}

stTimeDuration SecondsToDuration(int TotalSeconds)
{

    stTimeDuration TimeDuration;
    
    int Remainder = 0;

    TimeDuration.Days = TotalSeconds / 86400;
    Remainder = TotalSeconds % 86400;
    TimeDuration.Hours = Remainder / 3600;
    Remainder %= 3600;
    TimeDuration.Minutes = Remainder / 60;
    TimeDuration.Seconds = Remainder % 60;

    return TimeDuration;
}

void PrintResults(stTimeDuration TimeDuration)
{

    string Result = to_string(TimeDuration.Days) + ":" + to_string(TimeDuration.Hours) + ":" + to_string(TimeDuration.Minutes) + ":" + to_string(TimeDuration.Seconds);

    cout << Result << endl;

}

int main()
{

    PrintResults(SecondsToDuration(ReadPositiveNumber("Please enter the Total Seconds: ")));
    
    return 0;
}

