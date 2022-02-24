#include <iostream>
#include <vector>

using namespace std;

bool filling (){
    int s = 1;
    bool a [12][12];
    int i = 0;
    int j = 0;
    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            a [i][j] = s;
        }
    }
    return a;
}


void condition (bool a [][12]){
//    bool a [12][12];
    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
//            a [i][j] = s;
            cout << a [i][j];
        }
        cout << "\n";
    }
}




int main()
{
    int x1 = 0;
    int x2 = 0;
    int x3 = 0;
    int x4 = 0;
    bool ok = true;
    bool a [12][12] = filling();

    condition (a);



    cout << "Enter the coordinates of the beginning and end of the region\n";
    cin >> x1 >> x2 >> x3 >> x4;

    for (int i = x1; i != x3 ; i++){
        for (int j = x2; j != x4; j++){
            a [i][j] = filling(ok);
            if (a [i][j] == true){
                a [i][j] = false;
                cout << "Pop!";

            }
//            else if ((i < 0 || j < 0 || i >= 12 || j >= 12)) {
//                ok = false;
//                break;
//            }
        }
//        if (!ok) {
//            cout << "Values out of range!";
//        }
        cout << endl;
    }
    cout << ok << endl;
    condition(a);



    return 0;
}
