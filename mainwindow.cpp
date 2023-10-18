#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    QColor color(255, 255, 255);
    auto pen =QPen(color ,1);
    painter.setPen(pen);

    QPoint start_point;(20.30);
    int height = 200;
    int width = 100;
    for(int x=0;x<width; ++x){
        for(int y=0;y<height;++y){
            painter.drawPoint(start_point+QPoint(x,y));
        }
    }
}
