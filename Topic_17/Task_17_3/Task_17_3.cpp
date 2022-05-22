#include <iostream>

using namespace std;

int main()
{
    char s[] = "paparapapa";
    char c[] = "";
    int i, j;
    bool found = false;
    if(sizeof (c) != 1){
        for(i = 0; *(s + i) != '\0'; i++){
            bool corr = true;
            for(j = 0; *(c + j) != '\0'; j++){
                if((*(c + j) != *(s + (i + j)))){
                    corr = false;
                    break;
                } else{

                }
             }

            if(corr){
               found = true;
               cout << "Yes\n";
               break;
            }
        }
    }

    return 0;
}
