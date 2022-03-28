#include <iostream>
#include <vector>
#include <cmath>
#include <deque>

using namespace std;

int main()
{

    int z = 0;
    vector<int> a = {-200,-100,-5,1,10,15};

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
        int n = 1;
        int q = 1;
        int j;
        for(int y = i; y > 0; y--){
            for(j = z; ; j++){
                if(abs(a[y]) >= a[j]){
                    cout << a[j] << " ";
                }else if(abs(a[y]) < a[j]){
                    cout << a[y] << " ";
                    z = j;
                    cout << z << "//";

                    break;
                }else if(z == a.size() - 1){
                    for(int x = y; x < a.size() - 1; x++){
                        cout << a[x] << " ";
                    }
                }else if(j == a.size() - 1 & y != 0){
                    for(int x = y; x < a.size() - 1; x++){
                        cout << a[x] << " ";
                }

            }

    }



    return 0;
}

