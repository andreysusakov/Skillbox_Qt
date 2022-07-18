#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string fish;
    string text;
    ifstream river;
    int sum = 0;
    river.open ("C:\\Skillbox\\river.txt");
    ofstream basket ("C:\\Skillbox\\basket.txt", ios::app);
    cout << "What kind of fish will we catch?\n";
    cin >> fish;
    if (river.is_open ())
    {
        while (!river.eof())
        {
            river >> text;
            if (text == fish)
            {
                basket << fish << endl;
                sum++;
            }
        }
        cout << "Caught " << sum << " " << fish << endl;
    }
    basket.close();
    river.close();


    return 0;
}