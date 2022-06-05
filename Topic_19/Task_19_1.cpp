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
    // schweik >> text;
    // cout << text;

    while (!schweik.eof())
    {
        schweik >> text;
        cout << text << " ";
        if (text == word)
        {
            w++;
        }
    }

    cout << "Number of word repetitions " << word << ": " << w;


    schweik.close();

    return 0;
}
