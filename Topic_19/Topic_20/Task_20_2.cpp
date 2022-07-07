#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(nullptr));
    ofstream pic ("C:\\Skillbox\\pic.txt", ios::app);
    int w = 0;
    int h = 0;
    // bool p = rand() % 2;
    cout << "Enter the height of the painting: \n";
    cin >> h;
    cout << "Enter the width of the picture: \n";
    cin >> w;
    bool picture [h][w];
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            picture[i][j] = rand() % 2;
            cout << picture[i][j];
            pic << picture[i][j];
        }
        cout << endl;
        pic << endl;
    }

    pic.close ();
    return 0;
}