#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream statement ("C:\\Skillbox\\statement_w.txt", ios::app);
    string name, surname, sum, date;
    int n = 0;

    while (n != 10)
    {
        cout << "Enter first name, last name, amount and date: " << endl;
        cin >> name >> surname >> sum >> date;
        statement << name << " " <<  surname << " " << sum << " " << date << endl;
        n++;
    }

    statement.close ();
    return 0;
}