#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    int sector = 1;
    string question;
    string answer;
    int offset = 0;
    bool finished = false;
    int connoisseurs = 0;
    int spectators = 0;
    int oldSector = 0;

    while (!(connoisseurs == 6 || spectators == 6))
    {
        cout << "Enter an offset, from 0 to 12: \n";
        cin >> offset;
        sector += offset;
        if (sector += offset > 13)
        {
            sector -= 13;
            if (sector == oldSector)
            {
                "The sector has already been played! \n";
            }
            else
            {
                oldSector = sector;
            }
        }
        else if (sector == oldSector)
        {
            "The sector has already been played! \n";
        }
        else
        {
            oldSector = sector;
        }       
    }


     return 0;
}