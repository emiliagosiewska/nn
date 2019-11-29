#ifndef SHOP_H
#define SHOP_H
#include "witch.h"
#include "assassin.h"
#include "goner.h"
#include "vampire.h"
#include "soldier.h"


class Shop :public witch, public assassin, public goner, public soldier, public vampire
{


public:
    char purchase;
void choose_item();

};


#endif // SHOP_H
