#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a [4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Enter Matrix Element " << i << ";" << j << endl;
            cin >> a [i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if ((i == 0 && j == 0) || (i == 1 && j == 1) || (i == 2 && j == 2) || (i == 3 && j == 3)) {
                cout << a [i][j] << " ";
            }else {
                a [i][j] = 0;
                cout << a [i][j] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
