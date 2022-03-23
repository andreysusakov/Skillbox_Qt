#include <iostream>
#include <vector>
#include <cmath>
#include <deque>

using namespace std;

int main()
{
    int n = 0;
    deque<int> a;

<<<<<<< HEAD

    do{
        cout << "Enter vector element: \n";
        cin >> n;
=======
    cout << "Enter vector element: \n";
    cin >> n;
    a[0] = n;

    while(n != -2){
>>>>>>> 344386f13ab792b3ec201e8c4b6e5f2d318cd250
        if(n == -1 & a.size() < 5){
            cout << "Mistake! Vector size less than 5!\n";
        }else if(n == -1){
            cout << a[4] << endl;        
        }else{
<<<<<<< HEAD
            a.push_back(n);
            if(a.size() >= 5 & a[4] < n){
                for(int i = 3; i > 0; i--){
                    if(a[i] < a[i - 1]){
                        swap(a[i], a[i - 1]);
                    }
                }
            }else{
                for(int i = a.size() - 1; i > 0; i--){
                    if(a[i] < a[i - 1]){
                        swap(a[i], a[i - 1]);
=======
            a.push_front(n);
            if(a.size() < 5){
                for(int i = 0; i < a.size(); i++){
                    if(a[i] > a[i + 1]){
                        swap(a[i], a[i + 1]);
                    }
                }
            }else{
                for(int i = 0; i < 5; i++){
                    if(a[i] > a[i + 1]){
                        swap(a[i], a[i + 1]);
>>>>>>> 344386f13ab792b3ec201e8c4b6e5f2d318cd250
                    }
                }
            }

        }

        for(int i = 0; i < a.size(); i++){
            cout << a[i] << " ";

<<<<<<< HEAD
    }while(n != -2);
=======
        }
        cout << "Enter vector element: \n";
        cin >> n;
    }
>>>>>>> 344386f13ab792b3ec201e8c4b6e5f2d318cd250



    return 0;
}
