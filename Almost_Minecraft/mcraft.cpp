#include <iostream>

using namespace std;

int main()
{
    bool l = false;
    bool mcraft [5][5][3];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 3; k++) {
                cout << "Set block level " << k << " in sector " << i << ";" << j << ", enter 0 or 1" << endl;
                cin >> l;
                mcraft [i][j][k] = l;

            }
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 3; k++) {
                cout << mcraft [0][j][k];

            }
        }
    }


    return 0;
}
