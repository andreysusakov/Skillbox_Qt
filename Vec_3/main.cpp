#include <iostream>
#include <vector>


int main() {
    std::vector <int> vec;
    int n = 20;
    int a = 0;

    for (int i = 0; a != -1; ++i) {
        std::cout << "Enter whole numbers." << std::endl;
        std::cin >> a;
        if (a == -1) {
            for (int i = 0; i < vec.size(); ++i) {
                std::cout << vec[i] << "\n";
            }
            break;
        }
        else if (i == n) {
            vec.push_back(a);
            for (int j = 0; j < vec.size() + 1; ++j) {
                vec[j] = vec[j + 1];
            }
            vec.pop_back();
            i = n - 1;
        }else {
            vec.push_back(a);
        }
    }

        return 0;
}
