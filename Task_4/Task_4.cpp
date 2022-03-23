#include <iostream>
#include <vector>
#include <cmath>
<<<<<<< HEAD
=======
#include <deque>
>>>>>>> 344386f13ab792b3ec201e8c4b6e5f2d318cd250

using namespace std;

int main()
{
<<<<<<< HEAD
    vector <int> vec = {-100,-50, -5, 1, 10, 15};

    cout << "Hello World!" << endl;
=======
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




>>>>>>> 344386f13ab792b3ec201e8c4b6e5f2d318cd250
    return 0;
}
