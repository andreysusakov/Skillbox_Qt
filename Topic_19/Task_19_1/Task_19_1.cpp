#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    ifstream schweik;
    string word;
    string text;
    int w = 0;

    cout << "Enter a search term: \n";
    cin >> word;

    schweik.open("C:\\Skillbox\\words.txt");


    while (!schweik.eof())
    {
        schweik >> text;
        cout << text << " ";
        if (text == word)
        {
            w++;
        }
    }
    cout << endl;
    cout << sizeof (text) << endl;

    cout << "Number of word repetitions " << word << ": " << w << endl;


    schweik.close();

    return 0;
}
