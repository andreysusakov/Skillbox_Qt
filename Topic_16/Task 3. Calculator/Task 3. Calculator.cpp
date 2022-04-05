#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string buffer;
    double result;
    double x;
    double y;
    char z;
    stringstream buffer_stream;

    cout << "Enter an first example: " << endl;
    cin >> x >> z >> y;

    buffer_stream << x << z << y;
    cout << buffer_stream.str() << endl;
    buffer_stream >> buffer >> x >> buffer >> z >> buffer >> y;
    cout << x << " " << z << " " << y << endl;
    result = ?; //Пока не понимаю как автоматом получить результат из переменных.

    cout << result << endl;
    return 0;
}
