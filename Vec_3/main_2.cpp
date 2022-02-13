#include <iostream>
#include <vector>


int main() {
    std::vector <int> vec;
    int n = 0;
    int a = 0;

    while (a == -2) {

    std::cout << "Enter whole numbers." << std::endl;
    std::cin >> a;
        if (a == -1) {
            for (int i = n; i < vec.size(); ++i) {
                std::cout << vec[i] << " ";
            }
            for (int i = 0; i < n; ++i) {
                std::cout << vec[i] << " ";
            }

        }
        else {
            vec[n] = a;
            n++;
            if (n = 20) {
                n = 0;
            }
            std::cout << "Enter whole numbers." << std::endl;
            std::cin >> a;

        }
    }


        return 0;
}
