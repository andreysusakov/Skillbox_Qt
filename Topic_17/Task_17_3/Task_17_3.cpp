#include <iostream>

using namespace std;

int main()
{
    char s[] = "paparapapa";
    char c[] = "rt";
    int i, j;
    bool found = false;

    for(i = 0; *(s + i) != '\0'; i++){
        bool corr = true;
        for(j = 0; *(c + j) != '\0'; j++){
            if(*(c + j) != *(s + (i + j))){
                corr = false;
                break;
            }
        }
        if(corr){
           found = true;
           cout << "Yes\n";
           break;
        }
    }


    return 0;
}
