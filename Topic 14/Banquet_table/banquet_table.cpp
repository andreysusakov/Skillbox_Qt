#include <iostream>
#include <vector>

int main() {

    int cutlery [2][6] = {{3, 3, 3, 3, 3, 4}, {3, 3, 3, 3, 3, 4}};
    int tableware [2][6] = {{2, 2, 2, 2, 2, 3}, {2, 2, 2, 2, 2, 3}};
    int chairs [2][6] = {{1, 1, 1, 1, 1, 1,}, {1, 1, 1, 1, 1, 1,}};

    chairs [0][4] = 2;
    cutlery [1][2] = 2;
    cutlery [1][5] = 3;
    cutlery [1][2] = 3;
    tableware [1][5] = 2;

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 6; ++j) {
            std::cout << cutlery [i][j] << " ";
        }
        std::cout  << "|| ";
    }
    std::cout  << "\n";

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 6; ++j) {
            std::cout << tableware [i][j] << " ";
        }
        std::cout  << "|| ";
    }
    std::cout  << "\n";

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 6; ++j) {
            std::cout << chairs [i][j] << " ";
        }
        std::cout  << "|| ";
    }
    std::cout  << "\n";
    return 0;
}
