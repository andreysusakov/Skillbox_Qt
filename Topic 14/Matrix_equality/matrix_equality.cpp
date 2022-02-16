#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int a [4][4];
    int b [4][4];


    cout << "Enter Matrix a.\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Enter Matrix element a " << i << ";"<< j << endl;
            cin >> a [i][j];
            cout << a [i][j] << "\n";
        }
    }


    int sum = 0;
    cout << "Enter Matrix b.\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
           cout << "Enter Matrix element b " << i << ";"<< j << endl;
           cin >> b [i][j];
           cout << a [i][j] << "  " << b [i][j] << "\n";
           if (b [i][j] != a [i][j]){
               sum++;
           }
           cout << sum << "\n";

        }
    }

    if (sum != 0) {
        cout << "Matrixes arse not equal!";
    }else {
         cout << "The matrices are equal!";
    }


    return 0;
}
