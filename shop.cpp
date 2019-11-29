#include "shop.h"

shop::shop()
{
    //ctor
}

shop::~shop()
{
    //dtor
}
shop::choose_item(){

int dragon;
int gun;
int dust;
int shoes;
int armor;

shop(): dragon(5),
        gun(6),
        dust(3),
        shoes(4),
        armor(6)



           int getDustDMG() {
            return dust;
        }
        int getDragonDMG() {
            return dragon;
        }
        int getGunDMG() {
            return gun;
        }
        int getShoesDMG(){
            return shoes;
        }
        int getArmorHP(){
            return armor;
        }


cout<<"Welcome in the shop, you can buy only one element- this purchase can decide about your loss or win, so think through about it!!"<< endl;
cout<<"List of elements you can buy: "<<endl;
cout<<"1.A fire-breathing companion- he is able to harm the enemy on distance (+5dmg)"<<endl;
cout<<"2.A PHASR is a Personnel Halting And Stimulation Response- this gun doesn't kill but it dazzles the target (tip: it helps to get closer to enemy without getting harmed) (+6dmg)"<<endl;
cout<<"3.Invisible dust- it lasts about 15 seconds, in this time the enemy can't see the character(+3dmg)"<<endl;
cout<<"4.Speed shoes- they increase speed of the character- help to get to the enemy quickly (+4dmg)"<<endl;
cout<<"5. Diamond armor- it protects the character, but doesn't influent on dmg (+6hp)"<<endl;
cout<<"6.I don't want to buy anything!"<<endl;

cout<<"Your choice: "<<endl;
cin>>purchase;

switch(purchase)
{
case 1:
    {
        cout<<"Good, the purchase is in your equipment!"<<endl;
        assassin.increase_dmg(shop.getDragonDMG())
        break;
    }
case 2:
    {
        cout<<"Good, the purchase is in your equipment!"<<endl;
        soldier.increase_dmg(shop.getGunDMG())
        break;
    }
case 3:
    {
        cout<<"Good, the purchase is in your equipment!"<<endl;
        goner.increase_dmg(shop.getDustDMG())
        break;
    }
case 4:
    {
        cout<<"Good, the purchase is in your equipment!"<<endl;
        vampire.increase_dmg(shop.getShoesDMG())
        break;
    }
case 5:
    {
        cout<<"Good, the purchase is in your equipment!"<<endl;
        witch.increase_hp(shop.getArmorDMG())
        break;
    }
case 6:
    {
        cout<<"Well, I wish you good luck ;) "<<endl;
        break;
    }
}
}
