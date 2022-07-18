#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int month = 0;
    int day = 0;
    int sum = 0;
    ofstream statement ("C:\\Skillbox\\statement_w.txt", ios::app);
    string name, surname, date;
    string in_name, in_surname, in_date;
    int n = 0;
    bool corr = true;

    while (n != 10)
    {
        cout << "Enter first name, last name, amount and date: " << endl;
        cin >> name >> surname >> sum >> date;
        day = stoi(date.substr(0, 2));
        month = stoi(date.substr(3, 2));
        
        cout << day << "." << month << endl;
        if ((day >= 1 && day <= 31) && (month >= 1 && month <= 12))
        {
            cout << "Check the correctness of information and enter 1 if true, or 0 if not true." << endl;
            cout << "Name: " << name << endl;
            cout << "Surname: " << surname << endl;
            cout << "Month: " << month << endl;
            cout << "Sum: " << sum << endl;
            cin >> corr;
            if (corr)
            {
                cout << "Yes!\n";
                statement << name << " " << surname << " " << date << " " << sum << endl;
                n++;
            }
            else
            {
                cout << "No!\n";
            }
            statement.close();
        }
        else
        {
            cout << "Date is not correct!\n";
        }
    }

    return 0;
}