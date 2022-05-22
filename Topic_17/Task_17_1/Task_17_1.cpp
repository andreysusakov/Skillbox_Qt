#include <iostream>

using namespace std;

void swap_int_1 (int* pa, int* pb){
    int c = 0;
    int a = *pa;
    int b = *pb;
    int* pc = &c;

    *pc = a;
    *pa = b;
    *pb = a;
}


int main()
{
    int a = 25;
    int b = 50;
    cout << a << " " << b << endl;

    swap_int_1(&a, &b);
    cout << a << " " << b << endl;


    return 0;
}
