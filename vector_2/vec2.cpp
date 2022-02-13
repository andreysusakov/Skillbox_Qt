#include <iostream>
#include <vector>

int main() {
    std::vector<float> price = {12.f, 3.5, 5.7, 1.4, 2.f};
    std::vector<int> shop = {3, 1, 4, 4, 0};
    float sum = 0;

    for (auto a: shop) {
        sum += price[a];
    }
    std::cout << "Purchase amount = " << sum << "\n";

    return 0;
}

//#include <iostream>
//#include <vector>

//int main() {
//    int n = 0;
//    int a = 0;
//    std::cout << "Enter the size of the array.\n";
//    std::cin >> n;
//    std::vector<int> vec(n);
//    std::cout << "Enter arbitrary numbers.\n";
//    for (int i = 0; i < n; ++i) {
//        std::cout << "Enter the value of the element with index " << i << "\n";
//        std::cin >> vec[i];
//    }
//    std::cout << "Enter an arbitrary integer.\n";
//    std::cin >> a;

//    for (int i = 0; i < vec.size(); ++i) {
//        if (vec[i] != a) {
//            std::cout << vec[i] << "  ";
//        }
//    }

//    return 0;
//}
