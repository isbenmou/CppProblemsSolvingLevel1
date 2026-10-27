#include <iostream>

using namespace std;

struct stPiggyBankContent
{

    int Pennys, Nickels, Dimes, Quarters, Dollars;

};

stPiggyBankContent ReadPiggyBankContent()
{

    stPiggyBankContent PiggyBankContent;

    cout << "Please enter Penny?" << endl;
    cin >> PiggyBankContent.Pennys;

    cout << "Please enter Nickel?" << endl;
    cin >> PiggyBankContent.Nickels;

    cout << "Please enter Dime?" << endl;
    cin >> PiggyBankContent.Dimes;

    cout << "Please enter Quarter?" << endl;
    cin >> PiggyBankContent.Quarters;

    cout << "Please enter Dollar?" << endl;
    cin >> PiggyBankContent.Dollars;

    return PiggyBankContent;
}

int CalculateTotalPennies(stPiggyBankContent PiggyBankContent)
{

    int TotalPennies = PiggyBankContent.Pennys + PiggyBankContent.Nickels * 5 + PiggyBankContent.Dimes * 10 + PiggyBankContent.Quarters * 25 + PiggyBankContent.Dollars * 100;

    return TotalPennies;
}

int main()
{

    int TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());
    cout << endl << TotalPennies << " Pennies" << endl;
    cout << endl << TotalPennies / 100 << " Dollars" << endl;

    return 0;
}
