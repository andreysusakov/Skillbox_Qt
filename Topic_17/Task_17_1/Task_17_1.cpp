#include <iostream>

using namespace std;

void swap_int_1 (int* pa, int* pb, int a, int b){
    *pa = b;
    *pb = a;
}


int main()
{
    int a = 25;
    int b = 50;
    int* pa = &a;
    int* pb = &b;
    cout << a << " " << b << endl;

    swap_int_1(pa, pb, a, b);
    cout << a << " " << b << endl;


    return 0;
}
