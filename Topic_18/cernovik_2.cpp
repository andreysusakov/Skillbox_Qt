#include <iostream>

using namespace std;

int main ()
{
    int a = 5000;
    int b = 2000;
    int sum = 0;
    int sum_1 = 0;
    int sum_2 = 0;

cout << "Sum:\n";
cin >> sum;
sum_1 = sum / a;
sum_2 = sum % a;
int sum_3 = sum / b;
int sum_4 = sum % b;

cout << sum_1 << " || " << sum_2 << endl;
cout << sum_3 << " || " << sum_4 << endl;
    return 0;
}