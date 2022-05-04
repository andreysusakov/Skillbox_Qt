#include <iostream>

using namespace std;

void reversal (int* pa, int a[10]){
    for (int i = 9; i >= 0; i--){
        pa = &a[i];
        cout << *pa << " ";
    }
    cout  << endl;
}


int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int *pa = &a[10];

    reversal(pa, a);

    return 0;
}
