#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    int control_sum = 0;
    int in_control_sum = 0;
    char oper_type;
    int sum = 0;
    int sum_1 = 0;
    int sum_2 = 0;
    int bill;
    int bill_1 = 5000;
    int bill_2 = 2000;
    int bill_3 = 1000;
    int bill_4 = 500;
    int bill_5 = 200;
    int bill_6 = 100;
    int n = 0;
    int a = 0;
    int q = 0;
    // ofstream on_bank;
    vector<int> bank_1;
    vector<int> bank_2;
    ofstream on_bank;

    cout << "Sum: \n";
    cin >> sum;

    ifstream in_bank("C:\\Skillbox\\bank.bin", ios::binary);
    for (int i = 0; i < 10; i++)
    {
        in_bank.read((char *)&bill, sizeof(bill));
        bank_2.push_back(bill);
        in_control_sum += bill;
        cout << bill << endl;
    }
    in_bank.close();
    cout << "Account amount: " << in_control_sum << endl;

    for (int i = 0; sum_1 != sum  && i < 10; i++)
    {
        sum_1 += bank_2[i];
        cout << sum_1 << " ||| " << bank_2[i] << endl;
        if (sum < sum_1)
        {
            sum_1 -= bank_2[i];
        }
        else if (sum >= sum_1)
        {
            bank_2[i] = 0;
        }

        cout << bank_2[i] << endl;
    }

    on_bank.open ("C:\\Skillbox\\bank.bin", ios::binary);
    for (int i = 0; i < 10; i++)
    {
        on_bank.write((char *)&bank_2[i], sizeof(bank_1[i]));
        control_sum += bank_2[i];
    }
    on_bank.close();
    cout << "Account amount: " << control_sum << endl;

    // cout << sum_1 << endl;
    // cout << sum_2 << endl;

    // cout << "Enter the amount to withdraw in multiples of 100 rubles\n";
    // cin >> sum;
    // in_control_sum -= sum;
    // cout << "Account amount: " << in_control_sum << endl;
    // on_bank.open("C:\\Skillbox\\bank.bin", ios::binary);
    // on_bank << in_control_sum;
    // on_bank.close();

    return 0;
}
