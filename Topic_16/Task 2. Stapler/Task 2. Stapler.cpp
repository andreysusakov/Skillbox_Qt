#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    double result;
    int whole_part = 0;
    int fractional_part = 0;
    string z;

    cout << "Enter the integer part of the number: \n";
    cin >> whole_part;
    cout << "Enter the fractional part of the number: \n";
    cin >> fractional_part;
    string x = to_string(whole_part);
    string y = to_string(fractional_part);
    z = x + '.' +y;
    cout << "Text: " << z << endl;

    result = stod(z);
    cout << "Number: " << result << endl;

    return 0;
}
