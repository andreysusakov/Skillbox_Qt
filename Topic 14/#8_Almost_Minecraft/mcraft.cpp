#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int k = 0;
    bool l = false;
    bool mcraft [5][5][10];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 10; k++) {
                cout << "Set block level " << k << " in sector " << i << ";" << j << ", enter 0 or 10" << endl;
                cin >> l;
                mcraft [i][j][k] = l;

            }
        }
    }

    cout << "Enter cut level: \n";
    cin >> k;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << mcraft [i][j][k];
        }
        cout << "\n";
    }


    return 0;
}
