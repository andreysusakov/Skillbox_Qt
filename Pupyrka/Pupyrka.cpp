#include <iostream>
#include <vector>

using namespace std;

bool filling (){
    bool a [12][12];
    for (int i =0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            a [i][j] = true;
        }
    }
    return a;
}


void condition (bool s = true){
    bool a [12][12];
    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            a [i][j] = s ;
        }
    }

    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            cout << a [i][j];
        }
        cout << "\n";
    }
}

//bool a [12][12];
//for (int i = ; i < 12; i++){
//    for (int j = 0; j < 12; j++){
//        a [i][j] = s ;
//    }
//}



int main()
{
    int x1 = 0;
    int x2 = 0;
    int x3 = 0;
    int x4 = 0;
    bool ok = true;

    bool pup = filling ();
    condition (pup);

    bool a [12][12];

    cout << "Enter the coordinates of the beginning and end of the region\n";
    cin >> x1 >> x2 >> x3 >> x4;

    for (int i = x1; i != x3 ; i++){
        for (int j = x2; j != x4; j++){
            if ((i < 0 && j < 0) || (i >= 12 && j >= 12)){
                ok = false;
            }else if (a [i][j] == true) {
                cout << "Pop!";
                a [i][j] = false;
            }
        }
    }
    if (!ok) {
        cout << "Values out of range!";
    }


    return 0;
}
