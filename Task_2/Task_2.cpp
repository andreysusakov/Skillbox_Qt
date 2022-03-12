#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 0;
    int sum = 0;
    int number_1 = 0;
    int number_2 = 0;
    vector <int> vec = {2, 7, 11, 15};
    cout << "Enter result number\n";
    cin >> n;

    for (int i = 0; i < vec.size(); i++){
        sum = n - vec[i];
        for (int j = i+1; j < vec.size(); j++){
            if (vec[j] == sum){
                number_1 = vec[i];
                number_2 = vec[j];
            }
        }
    }
    cout << "First index = " << number_1 << "\n" << "Second index = " << number_2 << endl;

    return 0;
}
