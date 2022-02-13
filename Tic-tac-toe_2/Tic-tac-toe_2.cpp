#include <iostream>
#include <vector>

int main() {

    char field [3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

    int x = 0;
    int y = 0;
    bool error;
    int cell = 0;


    do {
        int sum = 0;
        for (x = 0; x < 3; x++) {
            for (y = 0; y < 3; y++) {
                if (field [x][y] == 'X' || field [x][y] == 'O') {
                    sum ++;
                }
            }
        }

        if (sum == 9) {
            std::cout << "Draw!";
            break;
        }
        do {            
            error = true;
            std::cout << "player 1 turn, enter field coordinates.\n";
            std::cout << "enter coordinate x:\n";
            std::cin >> x;
            std::cout << "enter coordinate y:\n";
            std::cin >> y;
            if (field [x][y] == ' ') {
                field [x][y] = 'X';
            }else {
                error = false;
                std::cout << "The field is busy! Enter other coordinates.\n";

            }
        }while (error == false);


        int sum_1 = 0;
        int sum_2 = 0;

        for (x = 0; x < 3; ++x) {
            sum_1 = 0;
            sum_2 = 0;
            for (y = 0; y < 3; ++y) {
               if (field [x][y] == 'X') {
                   sum_1++;
            }
               if (field [y][x] == 'X') {
                   sum_2++;
               }

            }

        }
        if (sum_1 == 3 || sum_2 == 3) {
            std::cout << "Won X!\n";
            break;

        }


        do {
            error = true;
            std::cout << "player 2 turn, enter field coordinates.\n";
            std::cout << "enter coordinate x:\n";
            std::cin >> x;
            std::cout << "enter coordinate y:\n";
            std::cin >> y;
            if (field [x][y] == ' ') {
                field [x][y] = 'O';
            }else {
                error = false;
                std::cout << "The field is busy! Enter other coordinates.\n";
            }
        }while (error == false);


        for (x = 0; x < 3; ++x) {
            sum_1 = 0;
            sum_2 = 0;
            for (y = 0; y < 3; ++y) {
               if (field [x][y] == 'O') {
                   sum_1++;
            }
               if (field [y][x] == 'O') {
                   sum_2++;
               }

            }

        }
        if (sum_1 == 3 || sum_2 == 3) {
            std::cout << "Won O!\n";
            break;

        }
        cell ++;

    }while (cell < 9);

    return 0;
}
