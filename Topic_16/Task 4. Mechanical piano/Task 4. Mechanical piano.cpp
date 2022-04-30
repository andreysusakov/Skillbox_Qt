#include <iostream>
#include <string>
#include <sstream>
using namespace std;
enum notes
{
    DO = 1 << 0,
    RE = 1 << 1,
    MI = 1 << 2,
    FA = 1 << 3,
    SOL = 1 << 4,
    LA = 1 << 5,
    SI = 1 << 6
};


int main() {
    string text;
    int melody [12];
    int chord;


    for (int i = 0; i < 12; i++){
        cout << "Enter a chord: " << endl;
        cin >> chord;
        melody[i] = chord;
    }
    for (int chord_number = 0; chord_number < 12; chord_number++){
        text = to_string(melody[chord_number]);
        for (int k = 0; k < text.size(); k++){
            if (!(chord_number & DO) && text[k] == '1'){
                chord_number |= DO;
                cout << "DO" << " ";
            }
            else if (!(chord_number & RE) && text[k] == '2'){
                chord_number |= RE;
                cout << "RE" << " ";
            }
            else if (!(chord_number & MI) && text[k] == '3'){
                chord_number |= MI;
                cout << "MI" << " ";
            }
            else if (!(chord_number & FA) && text[k] == '4'){
                chord_number |= FA;
                cout << "FA" << " ";
            }
            else if (!(chord_number & SOL) && text[k] == '5'){
                chord_number |= SOL;
                cout << "SOL" << " ";
            }
            else if (!(chord_number & LA) && text[k] == '6'){
                chord_number |= LA;
                cout << "LA" << " ";
            }
            else if (!(chord_number & SI) && text[k] == '7'){
                chord_number |= SI;
                cout << "SI" << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
