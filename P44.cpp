#include <iostream>

using namespace std;

enum enDaysOfTheWeek { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int ReadNumberInRange(string Message, int From, int To)
{

    int Number = 0;

    do
    {

        cout << Message << endl;
        cin >> Number;

    } while (Number < From || Number > To);

    return Number;
}

enDaysOfTheWeek ReadNumberOfDay()
{

    return (enDaysOfTheWeek)ReadNumberInRange("PLease enter the number of day: ", 0, 7);

}

string DetermineNumberOfWeek(enDaysOfTheWeek Day)
{

    switch (Day)
    {

    case enDaysOfTheWeek::Sunday:
        return "Sunday";
    case enDaysOfTheWeek::Monday:
        return "Monday";
    case enDaysOfTheWeek::Tuesday:
        return "Tuesday";
    case enDaysOfTheWeek::Wednesday:
        return "Wednesday";
    case enDaysOfTheWeek::Thursday:
        return "Thursday";
    case enDaysOfTheWeek::Friday:
        return "Friday";
    case enDaysOfTheWeek::Saturday:
        return "Saturday";
    default:  
        return "Wrong Day!";
    }

}

void PrintDay(string Day)
{
    cout << Day << endl;
}

int main()
{

    PrintDay(DetermineNumberOfWeek(ReadNumberOfDay()));

    return 0;
}

