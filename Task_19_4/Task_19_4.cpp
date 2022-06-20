#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    ifstream fpng;
    string path;
    char buffer[100];

    cout << "Enter path to text file: \n";
    cin >> path;

    fpng.open(path, ios::binary);

    if(fpng.is_open())
    {


    }

    cout << endl;

    fpng.close();

    return 0;
}
