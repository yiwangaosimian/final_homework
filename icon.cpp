#include "icon.h"
#include <QRect>
#include <string>
const int N=32;
void icon::init_icon(string type)
{
    if(type=="grass")
    {
        pic_rect.setRect(2*N,0,1*N,1*N);
    }
    else if(type=="grass_b")    //new
    {
        pic_rect.setRect(4*N,0,1*N,1*N);
    }
    else if(type=="stone")  //new
    {
        pic_rect.setRect(4*N,9*N,1*N,1*N);
    }
    else if(type=="flower_white")  //new
    {
        pic_rect.setRect(4*N,4*N,1*N,1*N);
    }
    else if(type=="tree_small")  //new
    {
        pic_rect.setRect(4*N,6*N,N,N);
    }
    else if(type=="tree_flower_red")  //new
    {
        pic_rect.setRect(3*N,6*N,N,N);
    }
    else if(type=="wood")  //new
    {
        pic_rect.setRect(6*N,8*N,2*N,N);
    }
    else if(type=="wood_g")  //new
    {
        pic_rect.setRect(4*N,8*N,2*N,N);
    }
    else if(type=="house_b")  //new
    {
        pic_rect.setRect(0,22.8*N,4.9*N,4*N);
    }
    else if(type=="stand_cloth")  //new
    {
        pic_rect.setRect(8*N,4*N,4*N,3*N);
    }
    else if(type=="coco_tree")  //new
    {
        pic_rect.setRect(3*N,13*N,2*N,3*N);
    }
    else if(type=="stones")  //new
    {
        pic_rect.setRect(5*N,9*N,N,N);
    }
    else if(type=="sculpture")  //new
    {
        pic_rect.setRect(8*N,12*N,N,2*N);
    }
    else if(type=="tree_tall")  //new
    {
        pic_rect.setRect(5*N,6*N,1*N,2*N);
    }
    else if(type=="tree_tall_2")  //new
    {
        pic_rect.setRect(2*N,6*N,1*N,2*N);
    }
    else if(type=="chest")  //new
    {
        pic_rect.setRect(N,0,1*N,1.5*N);
    }
    else if(type=="pine")  //new
    {
        pic_rect.setRect(0,9*N,2*N,2*N);
    }
    else if(type=="pines")  //new
    {
        pic_rect.setRect(2*N,8*N,2*N,2*N);
    }
    else if(type=="green_tree")
    {
        pic_rect.setRect(6*N,4*N,2*N,2*N);
    }
    else if(type=="green_trees")
    {
        pic_rect.setRect(6*N,6*N,2*N,2*N);
    }
    else if(type=="player1")
    {
        pic_rect.setRect(0,0,1*N,1.5*N);
    }
    else if(type=="player2")
    {
        pic_rect.setRect(1*N,0,1*N,1.5*N);
    }
    else if(type=="player3")
    {
        pic_rect.setRect(0,1.5*N,1*N,1.5*N);
    }
    else if(type=="player4")
    {
        pic_rect.setRect(1*N,1.5*N,1*N,1.5*N);
    }
    else if(type=="player5")
    {
        pic_rect.setRect(0,3*N,1*N,1.5*N);
    }
    else if(type=="player6")
    {
        pic_rect.setRect(1*N,3*N,1*N,1.5*N);
    }
    else if(type=="player7")
    {
        pic_rect.setRect(0,4.5*N,1*N,1.5*N);
    }
    else if(type=="player8")
    {
        pic_rect.setRect(1*N,4.5*N,1*N,1.5*N);
    }

}
