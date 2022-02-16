#include <iostream>
#include <vector>

using namespace std;

int main()
{
    float v [4];
    float r [4];
    float m [4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Enter matrix element " << i << ";" << j << "\n";
            cin >> m [i][j];
        }
    }
    for (int j = 0; j < 4; j++) {
        cout << "Enter vector element " << j << "\n";
        cin >> v [j];
    }
    int j = 0;
    int x = 0;
    for (int i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            x = m [i][j] * v [j];
            r [i] += x;
        }
        cout << r [i] << " ";
    }


    return 0;

}
