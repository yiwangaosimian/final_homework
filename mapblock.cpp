#include "mapblock.h"
#include "icon.h"
#include "base.h"
#include <QImage>
QImage mapblock::_res=QImage("/Users/linhailan1/Desktop/new_rpg/mapblock.png");
void mapblock::show(QPainter *painter)
{
      icon _ic=this->get_myicon();
      painter->drawImage(this->get_myrect(),this->_res,_ic.get_rect());
}
