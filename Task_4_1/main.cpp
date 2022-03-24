#include <iostream>
#include <vector>
#include <cmath>
#include <deque>

using namespace std;

int main()
{
    vector<int> a = {-100,-50,-5,1,10,15};

    if(a[a.size() - 1] < 0){
        for(int i = a.size() - 1; i >= 0; i--){
            cout << a[i] << " ";
        }

    }else if(a[0] > 0){
        for(int i = 0; i < a.size(); i++){
            cout << a[i] << " ";
        }
    }else{
        for(int i = a.size() - 1; i >= 0; i--){
            if(a[i] < 0){
                for(int n = i; n >= 0; n--){
                    for(int j = i + 1; j < a.size(); j++){
                        if(abs(a[0]) < a[j]){
                            cout << a[0] << " ";
                            for(int k = j; k < a.size(); k++){
                                cout << a[k] << " ";
                            }
                        }else if(abs(a[n]) > a[a.size() - 1]){
                            cout << a[j] << " ";
                            for(int z = n; z < a.size(); z++){
                                cout << a[z] << " ";
                            }
                        }else if(abs(a[n]) > a[j]){
                            cout << a[j] << " ";
                        }else if(abs(a[n]) < a[j]){
                            cout << a[n] << " ";
                        }
                    }
                }

            }

        }
    }


    return 0;
}
