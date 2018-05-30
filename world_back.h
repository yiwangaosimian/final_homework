#ifndef WORLD_BACK_H
#define WORLD_BACK_H
#include "world.h"
#include"base.h"
#include"icon.h"
#include<QPainter>
#include<QImage>
#include"mapblock.h"
#include<vector>
#include"tree_pic.h"
#include"player.h"
#include "chest.h"
#include "house_b.h"
using namespace std;

class world_back
{
public:
    world_back(){};
    ~world_back(){};
    void init_world_b();
    void show(QPainter *painter);
    void player_move(int direction);
private:
    vector<mapblock> map_b;
    vector<tree_pic> _trees_b;
    player _myplayer_b;
    chest _box;
    house_b _house_b;
};

#endif // WORLD_BACK_H
