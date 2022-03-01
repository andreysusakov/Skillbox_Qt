#include <iostream>
#include <vector>

using namespace std;

void field (bool a [][10]){
    bool s = false;
    int i = 0;
    int j = 0;
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            a [i][j] = s;
        }
    }
}



int arrangement_1 (bool a [][10], int x1, int x2, int sum) {
    if (x1 < 0 || x2 < 0 || x1 > 10 || x2 > 10) {
        cout << "Don't go out of the field!\n";
    }else if (a [x1][x2] == true){
        cout << "Busy!\n";
    }else {
        a [x1][x2] = true;
        cout << "Ok!\n";
        sum = 1;
    }
return sum;
}




int arrangement_2 (bool a [][10], int x1, int x2, int x3, int x4, int sum) {
    if (x1 < 0 || x2 < 0 || x3 > 10 || x4 > 10) {
        cout << "Don't go out of the field!\n";
    }else if (x1 != x3 && x2 != x4) {
        cout << "A ship cannot be placed diagonally!\n";
    }else {
        for (int i = x1; i < (x3 + 1) ; i++) {
            for (int j = x2; j < (x4 + 1); j++) {
                if (a [i][j] == true) {
                    cout << "Busy!\n";
                    break;
                }else {
                    a [i][j] = true;
                    cout << "Ok!\n";
                    sum += 1;
                }
            }

        }
    }


    return sum;
}


int shot (bool a [][10], int x1, int x2, int sum) {
    if (a [x1][x2] == true){
        cout << "Bam! Got it!\n";
        sum--;
        a [x1][x2] = false;
    }else if (x1 < 0 || x2 < 0 || x1 > 10 || x2 > 10) {
        cout << "Shoot only in the war zone!\n";
    }else {
        cout << "Miss!\n";
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
    int state_1 = 0;
    int state_2 = 0;
    bool ship_1 [10][10];
    bool ship_2 [10][10];

    field (ship_1);
    field (ship_2);

    cout << "Placement of First Player Single-Deck Ships\n";
    cout << "Place 4 single-deck ships\n";
    do {
        cout << "Enter ship coordinates x1;x2.\n";
        cin >> x1 >> x2;
        state_1 += arrangement_1(ship_1, x1, x2, sum);
        cout << state_1 << endl;
    }while (state_1 < 4);


    cout << "Placing First Player Multideck Ships\n";
    cout << "Place 3 2-deck, 2 3-deck, 1 4-deck multi-deck ships\n";

    do {
        cout << "Enter ship coordinates. Start of the ship x1;x2, ship's end x3;x4.\n";
        cin >> x1 >> x2 >> x3 >> x4;

        state_1 += arrangement_2(ship_1, x1, x2, x3, x4, sum);
        cout << state_1 << endl;
    }while (state_1 < 20);




    cout << "Placement of single-deck ships of the second player";
    cout << "Place 4 single-deck ships\n";
    do{
        cout << "Enter ship coordinates x1;x2\n";
        cin >> x1 >> x2;
        state_2 += arrangement_1(ship_2, x1, x2, sum);
    }while (state_2 < 4);


    cout << "Placement of multi-deck ships of the second player\n";
    cout << "Place 3 2-deck, 2 3-deck, 1 4-deck multi-deck ships\n";

    do{
    cout << "Enter ship coordinates. Start of the ship x1;x2, ship's end x3;x4.\n";
    cin >> x1 >> x2 >> x3 >> x4;
    state_2 += arrangement_2(ship_2, x1, x2, x3, x4, sum);
    }while (state_2 < 20);


    cout << "Shootout!";
    cout << "************************************************************************\n";

    do {
        cout << "First player shot\n";
        cout << "Enter ship coordinates x1;x2\n";
        cin >> x1 >> x2;
        state_1 = shot (ship_1, x1, x2, state_1);

        cout << "Second player shot\n";
        cout << "Enter ship coordinates x1;x2\n";
        cin >> x1 >> x2;
        state_2 = shot (ship_2, x1, x2, state_2);

    }while (state_1 > 0 || state_2 > 0);
    if (state_1 == 0) {
        cout << "First player wins!\n";
    }else {
        cout << "Second player wins!\n";
    }

    return 0;
}
