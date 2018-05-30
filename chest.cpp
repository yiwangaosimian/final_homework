#include "chest.h"
#include "icon.h"
#include <QImage>
QImage chest::_pic("/Users/linhailan1/Desktop/new_rpg/chest.png");
void chest::show(QPainter *painter){
    icon temp(get_myicon());
    painter->drawImage(this->get_myrect(),this->_pic,temp.get_rect());
}

