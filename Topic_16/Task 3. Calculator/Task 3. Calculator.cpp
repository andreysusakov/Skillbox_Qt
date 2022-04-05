#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string buffer;
    double result = .0f;
    double x = 0;
    double y = 0;
    char z;


    cout << "Enter an first example: " << endl;
    cin >> buffer;
    stringstream buffer_stream(buffer);

    buffer_stream >> x >> z >> y;
    result = x + y; //Пока не понимаю как автоматом вставлять оператор из переменной.

    cout << result << endl;
    return 0;
}
