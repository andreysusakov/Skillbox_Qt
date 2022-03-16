#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int n = 0;
    vector <int> a;


    do{
        cout << "Enter vector element: \n";
        cin >> n;
        if(n == -1 & a.size() < 5){
            cout << "Mistake! Vector size less than 5!";
        }else if(n == -1){
            cout << a[4] << endl;        
        }else{
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
                    }
                }
            }

        }

        for(int i = 0; i < a.size(); i++){
            cout << a[i] << " ";
        }

    }while(n != -2);

    return 0;
}
