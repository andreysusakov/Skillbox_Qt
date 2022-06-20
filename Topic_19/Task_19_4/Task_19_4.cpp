#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    ifstream fpng;
    string text;
    char buffer[5];
    bool ok = false;
    string png_4;
    int count = 0;


    cout << "Enter path to PNG file: \n";
    cin >> text;

    fpng.open(text, ios::binary);
    string sub = text.substr(text.size() - 3, 3);
    cout << sub << endl;


    fpng.read(buffer, sizeof(buffer));
    buffer[4] = 0;
    png_4 = buffer;
    cout << png_4 << endl;
    for(int i = 0; i < png_4.size(); i++)
    {
        cout << png_4[i] << endl;
        if(+png_4[i] == 137 || png_4[i] == 80 || png_4[i] == 78 || png_4[i] == 71)
        {
            count++;
        }
    }



    if(count != 3 || sub != "png")
    {
        cout << "No!";
    }
    else
    {
        cout << "Yes!";
    }
    cout << endl;

    fpng.close();

    return 0;
}

