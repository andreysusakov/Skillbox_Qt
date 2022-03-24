#include <iostream>
#include <vector>
#include <cmath>
#include <deque>

using namespace std;

int main()
{
    vector <int> vec = {-100,-50, -5, 1, 10, 15};


    int n = 0;
    vector<int> a = {-100,-50,-5,1,10,15};

    if(a[a.size() - 1] < 0){
        for(int i = a.size() - 1; i > 0; i--){
            cout << a[i] << " ";
        }

    }else if(a[0] > 0){
        for(int i = 0; i < a.size(); i++){
            cout << a[i] << " ";
        }
    }else{
        for(int i = a.size() - 1; a[i] >= 0; i--){
            if(a[i] < 0){
                n = i;
                for(int j = n + 1; j < a.size(); j++){
                    if(a[i] < a[j] & i == 0){
                        cout << a[i] << " ";
                        for(int k = j; k < a.size(); k++){
                            cout << a[k] << " ";
                        }
                    }else if(a[i] > a[j] & j == a.size() - 1){
                        cout << a[j] << " ";
                        for(int z = j; z < a.size(); z++){
                            cout << a[z] << " ";
                        }
                    }else if(a[i] > a[j]){
                        cout << a[j] << " ";
                    }else if(a[i] < a[j]){
                        cout << a[j] << " ";
                    }
                }
            }

        }
    }


    return 0;
}
