#include <iostream>
#include <fstream>
#include <vector>
#include <string>


using namespace std;


void quiz_q (int sector = 0)
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
    string q10 = "C:\\Skillbox\\Q\\q10.txt";
    string q11 = "C:\\Skillbox\\Q\\q11.txt";
    string q12= "C:\\Skillbox\\Q\\q12.txt";
    string q13 = "C:\\Skillbox\\Q\\q13.txt";

    ifstream question;
    string text;
    string text_link = 'q' + to_string (sector);
    cout << text_link << endl;

    question.open (text_link);
    if (question.is_open ())
    {
        while (!question.eof())
        {
            question >> text;
            cout << text;
        }
        question.close ();
    }
}

string quiz_a (int sector = 0)
{
    string a1 = "C:\\Skillbox\\Q\\a1.txt";
    string a2 = "C:\\Skillbox\\Q\\a2.txt";
    string a3 = "C:\\Skillbox\\Q\\a3.txt";
    string a4 = "C:\\Skillbox\\Q\\a4.txt";
    string a5 = "C:\\Skillbox\\Q\\a5.txt";
    string a6 = "C:\\Skillbox\\Q\\a6.txt";
    string a7 = "C:\\Skillbox\\Q\\a7.txt";
    string a8 = "C:\\Skillbox\\Q\\a8.txt";
    string a9 = "C:\\Skillbox\\Q\\a9.txt";
    string a10 = "C:\\Skillbox\\Q\\a10.txt";
    string a11 = "C:\\Skillbox\\Q\\a11.txt";
    string a12 = "C:\\Skillbox\\Q\\a12.txt";
    string a13 = "C:\\Skillbox\\Q\\a13.txt";

    ifstream answer;
    string text;
    string text_link = 'a' + to_string (sector);

    answer.open (text_link);
    if (answer.is_open ())
    {
        while (!answer.eof())
        {
            answer >> text;
        }
        answer.close ();
    }
    return text;
}


int main()
{
    vector <int> oldSector;
    int s = 13;
    int sector = 1;

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
            cout << oldSector [i] << endl;
            while (sector == oldSector[i])
            {
                 if (sector == 13)
                {
                    sector = 1;
                }
                else
                {
                    sector ++;
                }
            }
        }

        cout << " Sector " << " " << sector << endl;
        cout << "Attention question!\n";
        quiz_q (sector);
        cout << "Enter your answer (one word): \n";
        cin >> answer;
        cout << "Attention! Correct answer: \n";
        cout << quiz_a(sector);
        oldSector.push_back(sector);

        if (answer == quiz_a(sector))
        {
            connoisseurs++;
            cout << "Right! One point for the Connoisseurs!\n";
            cout << "Total score: \n";
            cout << "Connoisseurs = " << connoisseurs << "::" << "Spectators = " << spectators << endl;
        }
        else
        {
            spectators++;
            cout << "Answer is not correct!\n";
            cout << "Right! One point for the Spectators!\n";
            cout << "Total score: \n";
            cout << "Connoisseurs = " << connoisseurs << "::" << "Spectators = " << spectators << endl;
        }
    }
    if (connoisseurs == 6)
    {
        cout << "Connoisseurs won!\n";
    }
    else
    {
        cout << "Spectators won!\n";
    }

     return 0;
}