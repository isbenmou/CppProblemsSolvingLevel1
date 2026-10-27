#include <iostream>

using namespace std;

enum enMonthsOfTheYear { January=1, February=2, March=3, April=4, May=5, June=6, July=7, August=8, September=9, October=10, November=11, December=12 };

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

enMonthsOfTheYear ReadNumberOfMonth()
{

    return (enMonthsOfTheYear)ReadNumberInRange("PLease enter the number of Month: ", 1, 12);

}

string DetermineNumberOfMonth(enMonthsOfTheYear Month)
{

    switch (Month)
    {

    case enMonthsOfTheYear::January:
        return "January";
    case enMonthsOfTheYear::February:
        return "February";
    case enMonthsOfTheYear::March:
        return "March";
    case enMonthsOfTheYear::April:
        return "April";
    case enMonthsOfTheYear::May:
        return "May";
    case enMonthsOfTheYear::June:
        return "JUne";
    case enMonthsOfTheYear::July:
        return "July";
    case enMonthsOfTheYear::August:
        return "August";
    case enMonthsOfTheYear::September:
        return "September";
    case enMonthsOfTheYear::October:
        return "October";
    case enMonthsOfTheYear::November:
        return "November";
    case enMonthsOfTheYear::December:
        return "December";
    default:
        return "Wrong Month!";
    }

}

void PrintMonth(string Month)
{
    cout << Month << endl;
}

int main()
{

    PrintMonth(DetermineNumberOfMonth(ReadNumberOfMonth()));

    return 0;
}
