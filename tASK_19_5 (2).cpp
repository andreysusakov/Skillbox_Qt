#include <iostream>
#include <fstream>
#include <vector>
#include <string>


using namespace std;

enum sector {s1 = 1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13};


void quiz_q (int s_num = s1) //выбор вопроса
{
    ifstream question;
    string text;
    string text_link;

    switch (s_num)
    {
    case (s1):
    {
        text_link = "D:\\Skillbox\\Q\\q1.txt";
        break;
    }
    case (s2):
    {
        text_link = "D:\\Skillbox\\Q\\q2.txt";
        break;
    }
    case (s3):
    {
        text_link = "D:\\Skillbox\\Q\\q3.txt";
        break;
    }
    case (s4):
    {
        text_link = "D:\\Skillbox\\Q\\q4.txt";
        break;
    }
    case (s5):
    {
        text_link = "D:\\Skillbox\\Q\\q5.txt";
        break;
    }
    case (s6):
    {
        text_link = "D:\\Skillbox\\Q\\q6.txt";
        break;
    }
    case (s7):
    {
        text_link = "D:\\Skillbox\\Q\\q7.txt";
        break;
    }
    case (s8):
    {
        text_link = "D:\\Skillbox\\Q\\q8.txt";
        break;
    }
    case (s9):
    {
        text_link = "D:\\Skillbox\\Q\\q9.txt";
        break;
    }
    case (s10):
    {
        text_link = "D:\\Skillbox\\Q\\q10.txt";
        break;
    }
    case (s11):
    {
        text_link = "D:\\Skillbox\\Q\\q11.txt";
        break;
    }
    case (s12):
    {
        text_link = "D:\\Skillbox\\Q\\q12.txt";
        break;
    }
    case (s13):
    {
        text_link = "D:\\Skillbox\\Q\\q13.txt";
        break;
    }

    default:
        break;
    }

    question.open (text_link);
    if (question.is_open ())
    {
        while (!question.eof())
        {
            question >> text;
            cout << text << " ";
        }
        cout << endl;
        question.close ();
    }
}

string quiz_a (int s_num = s1) // выбор ответа
{
    ifstream answer;
    string text;
    string text_link;

    switch (s_num)
    {
    case (s1):
    {
        text_link = "D:\\Skillbox\\Q\\a1.txt";
        break;
    }
    case (s2):
    {
        text_link = "D:\\Skillbox\\Q\\a2.txt";
        break;
    }
    case (s3):
    {
        text_link = "D:\\Skillbox\\Q\\a3.txt";
        break;
    }
    case (s4):
    {
        text_link = "D:\\Skillbox\\Q\\a4.txt";
        break;
    }
    case (s5):
    {
        text_link = "D:\\Skillbox\\Q\\a5.txt";
        break;
    }
    case (s6):
    {
        text_link = "D:\\Skillbox\\Q\\a6.txt";
        break;
    }
    case (s7):
    {
        text_link = "D:\\Skillbox\\Q\\a7.txt";
        break;
    }
    case (s8):
    {
        text_link = "D:\\Skillbox\\Q\\a8.txt";
        break;
    }
    case (s9):
    {
        text_link = "D:\\Skillbox\\Q\\a9.txt";
        break;
    }
    case (s10):
    {
        text_link = "D:\\Skillbox\\Q\\a10.txt";
        break;
    }
    case (s11):
    {
        text_link = "D:\\Skillbox\\Q\\a11.txt";
        break;
    }
    case (s12):
    {
        text_link = "D:\\Skillbox\\Q\\a12.txt";
        break;
    }
    case (s13):
    {
        text_link = "D:\\Skillbox\\Q\\a13.txt";
        break;
    }

    default:
        break;
    }

    answer.open (text_link);
    if (answer.is_open ())
    {
        while (!answer.eof())
        {
            answer >> text;
            cout << text << endl;
        }
        answer.close ();
    }
    return text;
}

int main()
{
    bool oldSector [13] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    // for (int i = 0; i < 13; i++)
    // {
    //     oldSector [i] = false;
    // }
    int s = 13;
    int s_num = 1;

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
        s_num += offset;
        if (s_num > s)
        {
            s_num -= s;
        }
        for (int i = 0; i < 13; i++) //проверка на отработанный сектор
        {
            cout << oldSector [i] << endl;
            while (oldSector [s_num - 1] == true)
            {
                s_num ++;
                if (s_num > 13)
                {
                    s_num = 1;
                }
            }

        }
        oldSector[s_num -1] = true; // записываем отработаный сектор


        cout << " Sector " << " " << s_num << endl;
        cout << "Attention question!\n";
        quiz_q (s_num);
        cout << "Enter your answer (one word): \n";
        cin >> answer;
        cout << "Attention! Correct answer: \n";
        correct_answer = quiz_a(s_num);

        if (answer == correct_answer)
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