#include <bits/stdc++.h>//header file
#include <unistd.h>//header file for usleep or delay 
#define EQUALSEQUALTO ==
#define NOTEQUALTO !=
#define GREATEREQUALTO >=
#define LESSTHANEQUALTO <=
#define EQUALTO =
#define LESSTHAN <
#define GREATERTHAN >
using namespace std;
class functions//class
{
public:
    void oppnumber();//fun1
    void oppword();//fun2
    ~functions()//destructor
    {
        system("cls");//clearscreen
        cout << "programe successfully ended now executing destructor\n";
    }
};
int main()//main
{
    functions object1;//obj declaring 
    int choose = 0;
    unsigned int microsecond = 1000000;//unsigned int from delay
    cout << "\t*****MENU*****" << endl;
    usleep(2 * microsecond);//delaying output to the screen
    cout << "press:\n1 for number guessing game\n";
    usleep(2 * microsecond);
    cout << "2 for word guessing game\n=";
    cin >> choose;
    system("cls");
    if (choose EQUALSEQUALTO 1)
    {
        object1.oppnumber();//fun1call
    }
    else if (choose EQUALSEQUALTO 2)
    {
        object1.oppword();//fun2call
    }

    return 0;
}
void functions::oppnumber()//fun1initializing
{
    system("cls");
    unsigned int microsecond = 1000000;
    usleep(3 * microsecond);
    cout << "\n\t*****welcome to guess the number game*****\n";
    int guess = 0, tries = 0, num = 0;
    srand(time(0));
    num = rand() % 50 + 1;
    do
    {
        cout << "guess a number from 1 to 50\n=";
        cin >> guess;
        tries = tries + 1;
        if (num EQUALSEQUALTO guess)
        {
            system("cls");
            usleep(3 * microsecond);
            cout << "your number is:" << guess << endl;
            usleep(2 * microsecond);
            cout << "random number is:" << num << endl;
            usleep(1 * microsecond);
            cout << "congratulation your guess is right!\n";
            cout << "you have tried " << tries << " times\n";
            usleep(5 * microsecond);
        }
        else
        {
            if (guess GREATERTHAN num)
            {
                usleep(1 * microsecond);
                cout << "try again and decrease the number" << endl;
            }
            else
            {
                cout << "try again and higher the number" << endl;
            }
        }

    } while (num NOTEQUALTO guess);
}
void functions::oppword()//fun2initializing
{
    system("cls");
    string originalwords[12] = {
   "add", "attack", "black", "bad", "close", "cold", "drama", "dry", "end", "even", "fail", "fast"};
    string originaloppositwords[12] = {
        "subtract", "defend", "white", "good", "open", "hot", "comedy", "humid", "begin",
        "odd", "succeed", "slow"};
    string inputword[1], oppositword[1];
    int inputnum = -1;
    unsigned int microsecond = 1000000;
    usleep(3 * microsecond);
    cout << "\t*****welcome to guessing the opposit word game*****\n";
    for (int i = 0; i LESSTHAN 12; i++) // for (int i = 0; i <=5; i++) jitte tak loop chalana hai uttne tak hi chalana this will throw an error
    {
        usleep(2 * microsecond);
        cout << i << "\t" << originalwords[i] << "\t";
        i++;
        usleep(2 * microsecond);
        cout << i << "\t" << originalwords[i] << "\t";
        i++;
        usleep(2 * microsecond);
        cout << i << "\t" << originalwords[i] << endl;
    }
    cout << endl;
    usleep(2 * microsecond);
    cout << "choose a word from the list\nenter the number/index of word from the list to guess its opposit word\n";
    cin >> inputnum;
    if (inputnum GREATEREQUALTO 0 && inputnum LESSTHANEQUALTO 11)
    {
        cout << "enter the opposit word of the word you choose in lowoercase letters" << endl;
        cin >> oppositword[1];
        system("cls");
        if (originaloppositwords[inputnum] EQUALSEQUALTO oppositword[1])
        {
            cout << "congralution!your guess is right";
            usleep(3 * microsecond);
        }
        else
        {
            cout << "you loose\n";
            usleep(3 * microsecond);
            cout << "opposit word of " << originalwords[inputnum] << " is " << originaloppositwords[inputnum];
            usleep(3 * microsecond);
        }
    }
    else
    {
        cout << "invalid input";
    }
}
