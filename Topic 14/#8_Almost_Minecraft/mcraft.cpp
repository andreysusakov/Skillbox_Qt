#include <iostream>
#include <vector>

using namespace std;

void filling (bool a [][5][10]){
    bool s = false;
    int i = 0;
    int j = 0;
    int k = 0;
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            for (k = 0; k < 10; k++){
                a [i][j][k] = s;
            }
        }
    }
}


void condition (bool a [][5][10]){
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 10; k++) {
            cout << a [i][j][k];
            }
        }
        cout << "\n";
    }
}

int main()
{
    int cut = 0;
    int l = 0;
    int ok = true;
    bool mcraft [5][5][10];

    filling(mcraft);
    condition(mcraft);


    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Set block level " << " in sector " << i << ";" << j << ", enter 0 or 9" << endl;
            cin >> l;
            for (int k = 0; k < l; k++) {
            mcraft [i][j][k] = ok;
            }
        }
    }

    cout << "Enter cut level: \n";
    cin >> cut;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << mcraft [i][j][cut];
        }
        cout << "\n";
    }


    return 0;
}
