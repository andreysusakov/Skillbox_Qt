#include <iostream>
#include <vector>
#include <cmath>
#include <deque>

using namespace std;

int main()
{
    int n = 0;
    deque<int> a;

    cout << "Enter vector element: \n";
    cin >> n;
    a[0] = n;

    while(n != -2){
        if(n == -1 & a.size() < 5){
            cout << "Mistake! Vector size less than 5!\n";
        }else if(n == -1){
            cout << a[4] << endl;
        }else{
            a.push_front(n);
            if(a.size() < 5){
                for(int i = 0; i < a.size(); i++){
                    if(a[i] > a[i + 1]){
                        swap(a[i], a[i + 1]);
                    }
                }
            }else if(a[4] > n){
                a.push_back(n);
                a[4] = n;
                for(int i = a.size() - 1; i > 0; i--){
                    if(a[i] > a[i + 1]){
                        swap(a[i], a[i + 1]);
                    }
                }
            }

        }
        for(int i = 0; i < a.size(); i++){
            cout << a[i] << " ";

        }
        cout << "Enter vector element: \n";
        cin >> n;
    }



    return 0;
}

