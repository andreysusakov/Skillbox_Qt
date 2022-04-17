#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
using namespace std;
enum note
{
    DO = 1,
    RE = 2,
    MI = 4,
    FA = 8,
    SOL = 16,
    LA = 32,
    SI = 64
};
int main() {
    int note = 0;
    int n = 0;
    string melody [12];
    string chord;




        for (int i = 0; i < 12; i++){
            cout << "Enter a chord: " << i + 1 << endl;
            cin >> chord;
            melody [i] = chord;
        }



    std::cout << "Hello, World!" << std::endl;
    return 0;
}
