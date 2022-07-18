#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

enum bill
{
    S1,
    S2,
    S3,
    S4,
    S5,
    S6
};

int main()
{
    int control_sum = 0;
    int in_control_sum = 0;
    char oper_type;
    int sum = 0;
    int a = 0;
    int n = 1000;
    int sum_1 = 0;
    vector<int> bank_1;
    vector<int> bank_2;
    ofstream on_bank;
    ifstream in_bank;

    cout << "Enter the operation type: add '+', remove '-': \n";
    cin >> oper_type;

    if (oper_type == '+')
    {
        on_bank.open ("C:\\Skillbox\\bank.bin", ios::binary);
        for (int i = 0; i < n; i++)
        {
            a = rand() % 6;
            switch (a)
            {
            case (S1):
            {
                bank_1.push_back(100);
                break;
            }
            case (S2):
            {
                bank_1.push_back(200);
                break;
            }
            case (S3):
            {
                bank_1.push_back(500);
                break;
            }
            case (S4):
            {
                bank_1.push_back(1000);
                break;
            }
            case (S5):
            {
                bank_1.push_back(2000);
                break;
            }
            case (S6):
            {
                bank_1.push_back(5000);
                break;
            }
            default:
                break;
            }
            for (int j = i; j >= 0; j--)
            {
                if (bank_1[j] > bank_1[j - 1])
                {
                    swap (bank_1[j], bank_1[j - 1]);
                }
            }
            control_sum += bank_1[i];
            on_bank.write((char *)&bank_1[i], sizeof(bank_1[i]));
            // cout << bank_1[i] << endl;
        }
        // cout << "***********" << endl;
        on_bank.close();
        in_bank.open ("C:\\Skillbox\\bank.bin", ios::binary);
        for (int i = 0; i < n; i++)
        {
            int bill;
            in_bank.read((char *)&bill, sizeof(bill));
            bank_2.push_back(bill);
            in_control_sum += bill;
            // cout << bill << endl;
        }
        in_bank.close();
        cout << "Account amount: " << in_control_sum << " || "
             << "Control sum: " << control_sum << endl;
    }

    else if (oper_type == '-')
    {
        cout << "Enter the amount to withdraw in multiples of 100 rubles\n";
        cin >> sum;

        ifstream in_bank("C:\\Skillbox\\bank.bin", ios::binary);
        for (int i = 0; i < n; i++)
        {
            int bill = 0;
            in_bank.read((char *)&bill, sizeof(bill));
            bank_2.push_back(bill);
            in_control_sum += bill;
            // cout << bill << endl;
        }
        in_bank.close();
        cout << "Account amount: " << in_control_sum << endl;

        for (int i = 0; sum_1 != sum && i < n; i++) //отбор нужных
        //  банкнот
        {
            sum_1 += bank_2[i];
            // cout << sum_1 << " ||| " << bank_2[i] << endl;
            if (sum < sum_1)
            {
                sum_1 -= bank_2[i];
            }
            else if (sum >= sum_1)
            {
                bank_2[i] = 0;
            }

            // cout << bank_2[i] << endl;
        }

        on_bank.open("C:\\Skillbox\\bank.bin", ios::binary);
        for (int i = 0; i < n; i++)
        {
            on_bank.write((char *)&bank_2[i], sizeof(bank_1[i]));
            control_sum += bank_2[i];
        }
        on_bank.close();
        cout << "Account amount: " << control_sum << endl;
        //В итоге, если нет подходящих банкнот
        //  программа выдаёт сумму меньше
    }

    return 0;
}
