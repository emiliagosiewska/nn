#include <iostream>
#include <windows.h>
#include "classes.h"

using namespace std;



void menu()
{
    char choice;
    cout<<"Welcome in the magical rpg game! Choose one of the options: "<<endl;
    cout<<"Pick 's' to start the game "<<endl;
    cout<<"Pick 'e' to exit the program "<<endl;
    cout<<"Pick 'h' to show help "<<endl;
    cin>>choice;

    switch(choice)

    {
    case 's':
        {
            game();
            break;
        }
    case 'e':
        {
            cout<<"Maybe next time! :("<<endl;
            exit(0);
            break;
        }
    case 'h':
        {
            help();
            menu();
            break;
        }
    default:
        {
            cout<<"Unfortunately wrong letter :( "<<endl;
            menu();
            break;

        }
    }
}

void help()
{
   cout<<"This game concerns battles between magical (but not only) characters. You can win or loose- win provides you getting higher level (max. level equals 3). After choosing the character, you will be moved to the shop, in which you will be able to buy only one thing, this one thing will decide if you will win or loose, so think through about your purchaseIf you will get defeated the game will finish, but you can always try again"<<endl;
}





