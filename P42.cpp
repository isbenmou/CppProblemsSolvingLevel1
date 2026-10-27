#include <iostream>
#include <cmath>

using namespace std;

struct stTaskDuration
{

    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;

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

stTaskDuration ReadTaskDuration()
{

    stTaskDuration TaskDuration;

    TaskDuration.NumberOfDays = ReadPositiveNumber("Please enter a Number Of Days: ");
    TaskDuration.NumberOfHours = ReadPositiveNumber("Please enter a Number Of Hours: ");
    TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please enter a Number Of Minutes: ");
    TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please enter a Number Of Seconds: ");

    return TaskDuration;
}

int CalculTotalSeconds(stTaskDuration TaskDuration)
{

    int DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
    DurationInSeconds += TaskDuration.NumberOfSeconds;

    return DurationInSeconds;
}

void PrintResult(int Result)
{

    cout << "\n The Result Is " << Result << endl;

}

int main()
{

    PrintResult(CalculTotalSeconds(ReadTaskDuration()));

    return 0;
}
