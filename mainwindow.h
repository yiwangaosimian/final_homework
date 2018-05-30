#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"world.h"
#include "world_back.h"
#include <QImage>
#include <QPainter>
#include<QKeyEvent>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void paintEvent(QPaintEvent *e);
    void keyPressEvent(QKeyEvent *);
private:
    int flag;
    Ui::MainWindow *ui;
    world _game;
    world_back _game_b;
};

#endif // MAINWINDOW_H
