#include <iostream>

using namespace std;

void swap_int_1 (int a, int b){
    int* pa = &a;
    int* pb = &b;
    *pa = 50;
    *pb = 25;
    cout << a << " " << b << endl;

}

void swap_int_2 (int a, int b){
    int* pa = &a;
    int* pb = &b;
    pa = &b;
    pb = &a;
    cout << a << " " << b << endl;

}

int main()
{
    int a = 25;
    int b = 50;
    cout << a << " " << b << endl;

//    первый вариант
    swap_int_1(a, b);

//    второй вариант
    swap_int_2(a, b);


    return 0;
}
