#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    double result;
    string whole_part;
    string fractional_part;
    string z;

    cout << "Enter the integer part of the number: \n";
    cin >> whole_part;
    cout << "Enter the fractional part of the number: \n";
    cin >> fractional_part;
    z = whole_part + '.' +fractional_part;
    cout << "Text: " << z << endl;

    result = stod(z);
    cout << "Number: " << setprecision(10) << result << endl;

    return 0;
}
