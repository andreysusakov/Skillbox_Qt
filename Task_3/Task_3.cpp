#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int n = 0;
    vector <int> a;

    cout << "Enter vector element: \n";
    cin >> n;
    while(n != -2){
        if(n == -1 & a.size() < 5){
            cout << "Mistake! Vector size less than 5!";
        }else if(n == -1){
            cout << a[4] << endl;
        }else{
            a.push_back(n);
            for(int i = 0; n < a.size(); i++){
                if(n < a[i]){
                    swap(a[i], n);
                }
            }

        }
        cout << "Enter vector element: \n";
        cin >> n;

    }

    return 0;
}
