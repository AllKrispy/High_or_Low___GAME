/// C++ High or Low game

#include <iostream>

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

using namespace std;

int main()
{
    int option=0,ruleRead=false,firstTime,name,deposit=0,betmoney=0,betnum=0,turns=8,multiplier=0,balance=0;
    int random1=0,random11=0,random21=0,random31=0,random41=0;
    int random51=0,random61=0,random71=0,random81=0,random91=0;
    int random,randominator=0;
    bool isTrue=true,smallerBetmoney=true,smallerBetnum=true,not0=true;

    //Coloring the screen
    system("COLOR A0");

   ///  Color Codes:-
   /*                0 = Black       8 = Gray

                     1 = Blue        9 = Light Blue

                     2 = Green       A = Light Green

                     3 = Aqua        B = Light Aqua

                     4 = Red         C = Light Red

                     5 = Purple      D = Light Purple

                     6 = Yellow      E = Light Yellow

                     7 = White       F = Bright White
    */
    cout << "\n\n\t\t\t\t\t\tWelcome to a game of High or Low!"
         << "\n\n\t\tAre you playing this game for the first time?(1=yes,another no.= no): ";
    cin >> firstTime;

    //Ternary operator - shorthand for if-else.
    ruleRead = (firstTime!=1) ? true : false;

    //C++ was developed by Danish computer scientist Bjarne Stroustrup at Bell Labs in 1979.
    if (firstTime==1979)
    {
        ruleRead=true;
        cout << "\n\n\tWelcome, Mr.Developer.";
    }
    printf("\n\n\tWhat is your name: ");
    scanf("%s",&name);
    system("pause");
    system("cls");
    do
    {

        cout << "\n\n\t\t\t\t\t\tWelcome to a game of High or Low!"
             << "\n\n\tChoose an option"
             << "\n\n\t\t1.Rules of the game"
             << "\n\n\t\t2.Play"
             << "\n\n\t\t3.Exit"
             << "\n\n\tYour choice: ";
        cin >> option;
        switch(option)
        {
        case 1:
            ruleRead=true;
            cout << "\n\n\n\t";
            system("pause");
            system("cls");
            cout << "\n\n\t\t\t\t\t\tWelcome to a game of High or Low!"
                 << "\n\n\t\t\t\t\tRules of the game-"
                 << "\n\n\t1)Do not mess with the code."
                 << "\n\n\t2)Deposit your money."
                 << "\n\n\t3)Enter money to bet."
                 << "\n\n\t4)Guess a number between 1 to 100."
                 << "\n\n\t5)You will get 7 turns to guess the correct number."
                 << "\n\n\t6)If you win on the first turn, you will hit the jackpot"
                 << " & get 100X your bet money."
                 << "\n\n\t7)If you win on the second turn, you get 10X your bet money."
                 << "\n\n\t8)If you win on the third turn, you get 7X your bet money."
                 << "\n\n\t9)If you win on the fourth turn, you get 5X your bet money."
                 << "\n\n\t10)If you win on the fifth turn, you get 4X your bet money."
                 << "\n\n\t11)If you win on the sixth turn, you get 3X your bet money."
                 << "\n\n\t12)If you win on the seventh turn, you get 2X your bet money."
                 << "\n\n\t13)You will be told if you guess a number smaller/larger than"
                 << " the winning number\n\n\t";
            system("pause");
            system("cls");
            break;
        case 2:
            if(ruleRead==true)
            {
                system("pause");
                system("cls");
                turns=8;
                cout << "\n\n\t\t\t\t\t\tWelcome to a game of High or Low!";
                not0=true;
                while(not0!=false)
                {
                    cout << "\n\n\tEnter deposit money: $";
                    cin >> deposit;
                    if (deposit==0 && balance==0)
                    {
                        cout << "\n\n\tPlease make a deposit";
                    }
                    if (deposit!=0 || balance!=0)
                    {
                        not0=false;
                    }
                }
                balance+=deposit;
                cout << "\n\n\tYour current balance: $"<<balance;
                smallerBetmoney=true;
                while(smallerBetmoney!=false)
                {
                    cout << "\n\n\tEnter money to bet: $";
                    cin >> betmoney;
                    if (betmoney>balance)
                    {
                        cout << "\n\n\tNot enough funds.";
                    }
                    else
                    {
                        smallerBetmoney=false;
                    }
                }
                balance-=betmoney;
                srand(time(0));
                random1      = rand() % 100 + 1;
                random11     = rand() % 100 + 1;
                random21     = rand() % 100 + 1;
                random31     = rand() % 100 + 1;
                random41     = rand() % 100 + 1;
                random51     = rand() % 100 + 1;
                random61     = rand() % 100 + 1;
                random71     = rand() % 100 + 1;
                random81     = rand() % 100 + 1;
                random91     = rand() % 100 + 1;
                randominator = rand() % 10 + 1;
                random = (randominator==1)?random1:(randominator==2)?random11:(randominator==3)?random21:(randominator==4)?random31:(randominator==5)?random41:(randominator==6)?random51:(randominator==7)?random61:(randominator==8)?random71:(randominator==9)?random81:random91;
                isTrue=true;
//                cout << "\n\n\t\t\t"<<random1<< " "<<random11<< " "<<random21<< " "<<random31<< " "<<random41<< " "<<random51<< " "<<random61<< " "<<random71<< " "<<random81<< " "<<random91<< " "<<randominator<< " "<<random;
                while(isTrue!=false)
                {
                    smallerBetnum=true;
                    while(smallerBetnum!=false)
                    {
                        cout << "\n\n\tEnter number to bet on: ";
                        cin >> betnum;
                        if(betnum>100)
                        {
                            cout << "\n\n\tChoose a number between 1 to 100";
                        }
                        else
                        {
                            smallerBetnum=false;
                        }
                    }
                    if(turns==2 && betnum!=random)
                    {
                        cout <<"\n\n\t\tGAME OVER.The winning number was "<<random<<".";
                        isTrue=false;
                    }
                    if (betnum<random && turns!=2)
                    {
                        turns--;
                        cout << "\t\tYour number is too small.Try a bigger number. "<<turns-1<<" turns are left.";
                    }
                    if (betnum>random && turns!=2)
                    {
                        turns--;
                        cout << "\t\tYour number is too large.Try a smaller number. "<<turns-1<<" turns are left.";
                    }
                    if (betnum==random)
                    {
                        multiplier=(turns==8)?100:(turns==7)?10:(turns==6)?7:(turns==5)?5:(turns==4)?4:(turns==3)?3:(turns==2)?2:1;
                        printf("\n\n\t\t\tYAY!You won %s!",&name);
                        cout << "Your bet money, $"<<betmoney<<", just got multiplied by "<<multiplier<<"(which is $"<<multiplier*betmoney<<").\n\n\t";
                        balance+=betmoney*multiplier;
                        isTrue=false;
                    }
                }
            }
            else
            {
                cout << "\n\n\t\tFIRST READ THE RULES!";
            }
            system("pause");
            system("cls");
            break;
        case 3:
            cout << "\n\n\t\tThank you & hope you had fun\n\n";
            break;
        default:
            cout << "Please make a proper selection.";
            system("pause");
            system("cls");
            break;
        }
    }while(option!=3);
    return 0;
}
