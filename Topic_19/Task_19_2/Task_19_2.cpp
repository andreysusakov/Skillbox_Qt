#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    ifstream schweik;
    string text;
    char buffer[100];


    cout << "Enter path to text file: \n";
    cin >> text;

    schweik.open(text, ios::binary);

    if(schweik.is_open())
    {
        while (!schweik.eof())
        {
            schweik.read(buffer, sizeof(buffer));
            int count = schweik.gcount();
            buffer[count] = 0;
            cout << buffer;
        }
    }

    cout << endl;

    schweik.close();

    return 0;
}

