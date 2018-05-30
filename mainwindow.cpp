#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    flag=0;
    ui->setupUi(this);
    _game_b.init_world_b();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::paintEvent(QPaintEvent *e){
    QPainter *pa;
    pa = new QPainter();
    pa->begin(this);
    this->_game_b.show(pa);
    pa->end();
    delete pa;
}
void MainWindow::keyPressEvent(QKeyEvent *e)
{
    //direction = 1,2,3,4,5,6,7,8 for 上下左右
    flag++;
    if(e->key() == Qt::Key_A)
    {
        if(flag%2==0){
            this->_game_b.player_move(5);this->repaint();
        }
        else{
            this->_game_b.player_move(6);this->repaint();
        }
    }
    else if(e->key() == Qt::Key_D)
    {
        if(flag%2==0){
            this->_game_b.player_move(7);this->repaint();
        }
        else{
            this->_game_b.player_move(8);this->repaint();
        }
    }
    else if(e->key() == Qt::Key_W)
    {
        if(flag%2==0){
            this->_game_b.player_move(1);this->repaint();
        }
        else{
            this->_game_b.player_move(2);this->repaint();
        }
    }
    else if(e->key() == Qt::Key_S)
    {
        if(flag%2==0){
            this->_game_b.player_move(3);this->repaint();
        }
        else{
            this->_game_b.player_move(4);this->repaint();
            }
        }
}
