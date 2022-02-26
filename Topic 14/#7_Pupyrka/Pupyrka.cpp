#include <iostream>
#include <vector>

using namespace std;

void filling (bool a [][12]){
    bool s = true;
    int i = 0;
    int j = 0;
    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            a [i][j] = s;
        }
    }
}


void condition (bool a [][12]){
    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            if (a [i][j] == true){
                cout << 'X';
            }
            else {
                cout << 'O';
            }
        }
        cout << "\n";
    }
}

int pop (bool a [][12], int x1, int x2, int x3, int x4){
    int sum = 0;
    for (int i = x1; i != x3 ; i++){
        for (int j = x2; j != x4; j++){
            if (a [i][j] == true){
                a [i][j] = false;
                sum++;
                cout << "Pop!";
            }
        }
        cout << "\n";
    }

    return sum;
}


int main()
{
    int x1 = 0;
    int x2 = 0;
    int x3 = 0;
    int x4 = 0;
    int sum = 0;
    bool pup [12][12];

    filling (pup);
    condition (pup);

    do {
        cout << "Enter the coordinates of the beginning and end of the region\n";
        cin >> x1 >> x2 >> x3 >> x4;
        if ((x1 < 0 || x2 < 0 || x3 > 12 || x4 > 12) || (x1 > x3 || x2 > x4)) {
            do {
                cout << "Values out of range!";
                cout << "Enter the coordinates of the beginning and end of the region\n";
                cin >> x1 >> x2 >> x3 >> x4;
            }while ((x1 < 0 || x2 < 0 || x3 > 12 || x4 > 12) || (x1 > x3 || x2 > x4));
        }

        sum += pop (pup, x1, x2, x3, x4);
        condition(pup);


    }while (sum > 0 && sum != 144);

    cout << "The bubble is over!\n";


    return 0;
}
