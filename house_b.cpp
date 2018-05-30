#include "house_b.h"
#include "icon.h"
#include<QImage>
QImage house_b::_res= QImage("/Users/linhailan1/Desktop/new_rpg/house.png");
void house_b::show(QPainter *painter)
{
      icon _ic=this->get_myicon();
      painter->drawImage(this->get_myrect(),this->_res,_ic.get_rect());
}


