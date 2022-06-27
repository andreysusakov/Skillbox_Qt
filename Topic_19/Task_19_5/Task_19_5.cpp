#include <iostream>
#include <fstream>
#include <vector>


using namespace std;

string quiz (int sector = 0)
{
    string q1 = "C:\\Skillbox\\Q\\q1.txt";
    string q2 = "C:\\Skillbox\\Q\\q2.txt";
    string q3 = "C:\\Skillbox\\Q\\q3.txt";
    string q4 = "C:\\Skillbox\\Q\\q4.txt";
    string q5 = "C:\\Skillbox\\Q\\q5.txt";
    string q6 = "C:\\Skillbox\\Q\\q6.txt";
    string q7 = "C:\\Skillbox\\Q\\q7.txt";
    string q8 = "C:\\Skillbox\\Q\\q8.txt";
    string q9 = "C:\\Skillbox\\Q\\q9.txt";
    string q1 = "C:\\Skillbox\\Q\\q10.txt";
    string q1 = "C:\\Skillbox\\Q\\q11.txt";
    string q1 = "C:\\Skillbox\\Q\\q12.txt";
    string q1 = "C:\\Skillbox\\Q\\q13.txt";

    if(sector == 1)
    {
        
    }
    string text_link;
    text_iink = q1;
    string text;
    int number = 0;
    text_link.open (link);

    if (text_link.is_open())
    {
        while (!text_link.eof())
        {
           text_link >> number >> text;
        }
        if (number == sector)
        {
            return text;
        }
    }
    text_link.close ();
}


int main()
{
    vector <int> oldSector;
    int s = 13;
    int sector = 1;

    string a1 = "C:\\Skillbox\\Q\\a1.txt";
    string a2 = "C:\\Skillbox\\Q\\a2.txt";
    string a3 = "C:\\Skillbox\\Q\\a3.txt";
    string a4 = "C:\\Skillbox\\Q\\a4.txt";
    string a5 = "C:\\Skillbox\\Q\\a5.txt";
    string a6 = "C:\\Skillbox\\Q\\a6.txt";
    string a7 = "C:\\Skillbox\\Q\\a7.txt";
    string a8 = "C:\\Skillbox\\Q\\a8.txt";
    string a9 = "C:\\Skillbox\\Q\\a9.txt";
    string a1 = "C:\\Skillbox\\Q\\a10.txt";
    string a1 = "C:\\Skillbox\\Q\\a11.txt";
    string a1 = "C:\\Skillbox\\Q\\a12.txt";
    string a1 = "C:\\Skillbox\\Q\\a13.txt";

    string answer;
    string correct_answer;
    int offset = 0;
    int connoisseurs = 0;
    int spectators = 0;

    cout << "What is our life? The game!\n";
    while (!(connoisseurs == 6 || spectators == 6))
    {
        cout << "Enter an offset, from 0 to 12: \n";
        cin >> offset;
        sector += offset;
        if (sector > s)
        {
            sector -= s;
        }
        for (int i = 0; i < oldSector.size(); i++)
        {
            while (sector == oldSector[i])
            {
                 if (sector = 13)
                {
                    sector = 1;
                }
                sector ++;
            }
        }

        cout << " Sector " << " " << sector;
        cout << "Attention question!\n";
        // cout << quiz (textQ, sector);
        cout << "Enter your answer: \n";
        cin >> answer;
        cout << "Attention! Correct answer: \n";
        correct_answer = quiz(textA, sector);
        cout << correct_answer;
        oldSector.push_back(sector);

        if (answer == correct_answer)
        {
            connoisseurs++;
            cout << "Right! One point for the Connoisseurs!\n"
                 << "Total score: \n";
            cout << "Connoisseurs = " << connoisseurs << "::"
                 << "Spectators = " << spectators;
        }
        else
        {
            spectators++;
            cout << "Right! One point for the Spectators!\n"
                 << "Total score: \n";
            cout << "Connoisseurs = " << connoisseurs << "::"
                 << "Spectators = " << spectators;
        }
    }
    if (connoisseurs == 6)
    {
        cout << "Connoisseurs won!";
    }
    else
    {
        cout << "Spectators won!";
    }

     return 0;
}