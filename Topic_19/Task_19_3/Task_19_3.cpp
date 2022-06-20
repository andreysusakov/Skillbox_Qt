#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    ifstream statement;
    string name;
    string surname;
    string date;
    int sum = 0;
    int total = 0;
    string nameMax;
    string surnameMax;
    int sumMax = 0;


    statement.open("C:\\Skillbox\\statement.txt");

    if(statement.is_open())
    {
        while (!statement.eof())
        {
            statement >> name;
            if(statement.eof()) break;
            statement >> surname >> sum >> date;
            total += sum;

            if(sumMax < sum)
            {
                sumMax = sum;
                nameMax = name;
                surnameMax = surname;
            }
        }
    }

    cout << "Total: " << total << "\n" << "Maximum payout amount " << sumMax << " at " << nameMax << " " << surnameMax << "." << endl;
    cout << endl;

    statement.close();

    return 0;
}

