#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    ifstream schweik;
    string text;
    int count = 0;
    char buffer[20];

    cout << "Enter path to text file: \n";
    cin >> text;

    schweik.open(text, ios::binary);
    string is_open(text);
//    schweik.read(buffer, sizeof(buffer));
//    buffer[19] = 0;
//    count += schweik.gcount();
//    cout << buffer << " " << count << " " << sizeof(buffer) << endl;
//    schweik.read(buffer, sizeof(buffer));
//    count += schweik.gcount();
//    cout << buffer << " " << count << " " << sizeof(buffer);

    while (!schweik.eof())
    {
        schweik.read(buffer, sizeof(buffer));
        buffer[19] = 0;
        count += schweik.gcount();
        cout << buffer;
    }
    cout << endl;

    schweik.close();

    return 0;
}
