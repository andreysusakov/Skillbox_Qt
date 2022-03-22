#include <iostream>
#include <vector>
#include <cmath>
#include <deque>

using namespace std;

int main()
{
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
        for(int i = a.size() - 1; a[i] > 0; i--){

        }
    }




    return 0;
}
