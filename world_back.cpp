#include "world_back.h"
#include "base.h"
#include "icon.h"
#include <QPainter>
#include <QImage>
#include "mapblock.h"
#include <vector>
#include "tree_pic.h"
#include "player.h"
using namespace std;

void world_back::init_world_b()
{
    float i,j;
    tree_pic temp;
    for(i=0;i<100;i++)
    {
        for(j=0;j<20;j++)
        {
            mapblock temp;
            string a="grass_b";
            temp.init_(i,j,1,1,a);
            this->map_b.push_back(temp);
        }
    }
    temp.init_(3,0,1,1,"stone");
    this->_trees_b.push_back(temp);
    temp.init_(11,0,2,4,"sculpture");
    this->_trees_b.push_back(temp);
    for(i=0;i<5;++i){
        temp.init_(0,i*2,2,2,"pines");
        this->_trees_b.push_back(temp);
    }

    temp.init_(2,7,2,2,"pine");
    this->_trees_b.push_back(temp);
    temp.init_(4,7,2,2,"pine");
    this->_trees_b.push_back(temp);
    temp.init_(5,8,2,2,"pine");
    this->_trees_b.push_back(temp);
    temp.init_(2,9,2,2,"pine");
    this->_trees_b.push_back(temp);

    temp.init_(2,8,2,2,"pines");
    this->_trees_b.push_back(temp);
    temp.init_(4,8,2,2,"pines");
    this->_trees_b.push_back(temp);

    for(i=0;i<5;++i){
        temp.init_(1,i*2,2,2,"pine");
        this->_trees_b.push_back(temp);
    }
    temp.init_(0,i*2-1,2,2,"pine");
    this->_trees_b.push_back(temp);
    for(i=0;i<2;i+=0.5){
        temp.init_(11.5+i,12+i*2,1,2,"tree_tall");
        this->_trees_b.push_back(temp);
    }
    for(i=0;i<=1;i+=0.5){
        temp.init_(3+i,1+i,1,1,"tree_small");
        this->_trees_b.push_back(temp);
    }
    for(i=2;i<4;i+=0.5){
        temp.init_(i+3,i,1,1,"tree_flower_red");
        this->_trees_b.push_back(temp);
    }

    _box.init_(3.5,3.5,2,3,"chest");

    for(i=0;i<3;++i){
        temp.init_(6.5,3.5+i,1,2,"tree_tall_2");
        this->_trees_b.push_back(temp);
    }
    for(i=6.5;i<=13.5;++i){
        temp.init_(i,7,1,1,"tree_small");
        this->_trees_b.push_back(temp);
    }
    for(i=0;i<=4;i+=0.5){
        temp.init_(13.5+i,7+1.5*i,1,1,"tree_small");
        this->_trees_b.push_back(temp);
    }
    for(i=0.75;i<=3;i+=0.75){
        temp.init_(13.5+i,7-i,1,1,"tree_small");
        this->_trees_b.push_back(temp);
    }
    for(i=16.5;i<=22.5;++i){
        temp.init_(i,4,1,1,"tree_small");
        this->_trees_b.push_back(temp);
    }
    for(i=0;i<4;++i){
        for(j=4;j>i;--j){
            temp.init_(22.5+j,4+i*1.5,1,2,"tree_tall");
            this->_trees_b.push_back(temp);
        }
    }
    for(i=6;i<=7;i+=0.5){
        temp.init_(i,i+1.5,1,1,"tree_small");
        this->_trees_b.push_back(temp);
    }
    for(i=0;i<5;i+=0.5){
        temp.init_(20+i,8.5+1.5*i,1,1,"tree_small");
        this->_trees_b.push_back(temp);
    }

    for(i=0;i<=5;++i){
        temp.init_(7.5,9.25+0.75*i,1,1,"tree_small");
        this->_trees_b.push_back(temp);
    }
    for(i=0;i<32;i+=2){
        temp.init_(i,16,2,2,"pine");
        this->_trees_b.push_back(temp);
        temp.init_(i,17,2,2,"pines");
        this->_trees_b.push_back(temp);

    }
    _house_b.init_(2.5,9.5,4.9,4,"house_b");
    _myplayer_b.init_(1,13,1,1.5,"player1");

}
void world_back::show(QPainter *painter)
{
        vector<mapblock>::iterator aa;
        for(aa=map_b.begin();aa!=map_b.end();aa++)
        {
            (*aa).show(painter);
        }
        vector<tree_pic>::iterator bb;
        for(bb=_trees_b.begin();bb!=_trees_b.end();bb++)
        {
            (*bb).show(painter);
        }
        _house_b.show(painter);
        _myplayer_b.show(painter);
        _box.show(painter);

    }
void world_back::player_move(int direction)
{
        _myplayer_b.move(direction);

}





