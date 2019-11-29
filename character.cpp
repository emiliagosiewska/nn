#include "character.h"

character::character()
{
    //ctor
}

character::~character()
{
    //dtor
}

character::choose_character()
{
cout<<"Welcome in depths! Now you can pick the character you want to become "<<endl;
cout<<"Pick 'w' to play as a witch "<<endl;
cout<<"Pick 'a' to play as a assassin"<<endl;
cout<<"Pick 's' to play as a soldier" <<endl;
cout<<"Pick 'g' to play as a goner" <<endl;
cout<<"Pick 'v' to play as a vampire" <<endl;
cin>>choice;

switch(choice)
{
    case 'w':
    {
        cout<<"You have picked an ancient witch, her hp is not very high, but she has a high level of dmg- she takes her power from the enemy, but what is important her Achilles' heel is face-off"<<endl;
       // witch();
        break;
    }
    case 'a':
        {
            cout<<"You have picked an assassin from the Sparta's times, he has high hp, and his strong point is face-off, but on distance he is helpless"<<endl;
           // assassin();
            break;
        }
    case 's':
        {
            cout<<"You have picked a soldier from the United States Navy, unfortunately his hp level is the lowest because he is the human, notwithstanding he is very well trained and he is strong at face-off"<<endl;
           // soldier();
            break;
        }
    case 'g':
        {
            cout<<"You have picked a goner, he died during second world war fighting in the Kriegsmarine, he is merciless, he has high level of hp and takes the life energy from the enemy when he can't be seen, due to the fact that he had already died, and he has rebuilt stronger, nevertheless his dmg is low, because he was dead for 50 years"<<endl;
           // goner();
            break;
        }
    case 'v':
        {
    cout<<"You have picked a vampire, he comes from Barouqe, when he was transfigured into the vampire during the banquet. He has high level of hp, can cause harm when he is close, but he is starving when he doesn't have an access to fresh blood, tip: it is good idea to avoid the vampire as long as you can! "<<endl;
       // vampire();
        break;
        }
    default:
        {
        cout<<"Unfortunately, wrong letter- the character doesn't exist, pick once again! "<<endl;
        game();
        break;
        }

}
}
};
