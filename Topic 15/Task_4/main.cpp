#include <iostream>
#include <vector>
#include <cmath>
#include <deque>

using namespace std;

int main()
{

    int z = 0;
    bool left = false;
    bool right = false;
    vector<int> a = {-200,-6,-1,2,25,300};

    if(a[a.size() - 1] < 0){
        for(int i = a.size() - 1; i >= 0; i--){
            cout << a[i] << " ";
        }

    }else if(a[0] > 0){
        for(int i = 0; i < a.size(); i++){
            cout << a[i] << " ";
        }
    }else{
        int i;

        for(i = a.size() - 1; i >= 0; i--){
            if(a[i] < 0){
                z = i + 1;
                break;
            }
        }
        int j;
        int y;
        int q = 0;
        for( y= i; y >= 0; y--){
            for(j = z; j < a.size(); j++){

                if(abs(a[y]) >= a[j]){
                    cout << a[j] << " ";
                    z++;
                    if(j == a.size() - 1){
                        for(int x = y; x < 0; x--){
                            cout << a[x] << " ";
                        }
                    }


                }else if(abs(a[y]) < a[j]){
                    cout << a[y] << " ";
                    z = j;
                    if(y == 0){
                        for(int x = j; x < a.size(); x++){
                            cout << a[x] << " ";
                        }
                    }

                    break;
                }
            }
        }

    }


    return 0;
}



