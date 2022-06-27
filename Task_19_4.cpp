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

    fpng.read(buffer, sizeof(buffer));
    buffer[4] = 0;

    if (buffer[0] == -119 && buffer[1] == 'P' && buffer[2] == 'N' && buffer[3] == 'G')
    {
        cout << "Yes!";
    }
    else
    {
        cout << "No!";
    }
    cout << endl;

    fpng.close();

    return 0;
}
// png_4[0] == -119 && png_4[1] == 'P' && png_4[2] == 'N' && png_4[3] == 'G'