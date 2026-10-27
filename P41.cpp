#include <iostream>

using namespace std;

float ReadPositiveNumber(string message)
{

    float Number = 0;

    do
    {

        cout << message << endl;
        cin >> Number;

    } while (Number <= 0);

    return Number;
}

float HoursToDays(float Hours)
{

    return Hours / 24;

}

float DaysToWeeks(float Days)
{

    return Days / 7;

}

float HoursToWeeks(float Hours)
{

    return Hours / 7 / 24;

}

void PrintResults(float Result)
{

    cout << "\n The Result is " << Result << endl;

}

int main()
{

    float NumberOfHours = ReadPositiveNumber("Please enter the Number Of Hours: ");
    float NumberOfDays = HoursToDays(NumberOfHours);
    float NumberOfWeeks = DaysToWeeks(NumberOfDays);

    cout << endl;
    PrintResults(NumberOfDays);
    PrintResults(HoursToWeeks(NumberOfHours));

}

