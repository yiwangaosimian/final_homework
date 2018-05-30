#ifndef HOUSE_B_H
#define HOUSE_B_H


#include<QPainter>
#include"base.h"

class house_b:public base
{
public:
    void show(QPainter *painter);
private:
    static QImage _res;
};
#endif // HOUSE_B_H
