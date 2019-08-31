#include "mainwindow.h"
#include <QApplication>
#include<QGraphicsEllipseItem>
#include "MyCircle.h"
#include "NextScene.h"
#include <QGraphicsScene>
#include<QGraphicsView>
#include<QPushButton>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    int i;
    //MainWindow w;
    //w.show();
    //return a.exec();
    QGraphicsScene *scene = new QGraphicsScene();
    MyCircle *circ[37];
    int sliderPositionsX[] ={397, 563, 702, 743, 702, 566, 397, 231, 91, 46, 91, 227, 397, 506, 596, 624, 597, 508, 397, 290,
                            199, 170, 198, 287, 397, 454, 501, 516, 502, 454, 397, 340, 292, 277, 292, 339, 397};
    int sliderPositionsY[] = {50, 96, 233, 400, 568, 705, 749, 707, 569, 400, 233, 97, 173, 203, 291, 400, 509, 599, 627, 601,
                            511, 400, 291, 203, 281, 296, 343, 400, 458, 504, 519, 505, 457, 400, 342, 296, 400};
    int count = 0;
    for (int i = 0;i<37;i++) {
        circ[i] = new MyCircle(sliderPositionsX[i],sliderPositionsY[i],count);
        scene->addItem(circ[i]);
        /*if(i == 36)
        {
            count = 1;
        }*/
    }
    MyCircle getDistance;
    int *dist;
    dist = getDistance.distance;
    //ci->setRect(10,10,30,30);
    //scene->addItem(ci);
    //circ1->setRect(90,90,100,100);
    //scene->addItem(circ1);*/
    QPushButton *btnuser = new QPushButton();
    btnuser->setGeometry(QRect(800,100,78,47));
    btnuser->setText("Next Scene");
    scene->addWidget(btnuser);
    NextScene *qr = new NextScene(btnuser);
    scene->addItem(qr);
    //QObject::connect(btnuser,SIGNAL(clicked()),qr,SLOT(NextScene::storedata()));
    //rect->setFlag(QGraphicsItem::ItemIsFocusable);
    //rect->setFocus();
    /*
    QGraphicsEllipseItem *circle = new QGraphicsEllipseItem();
    circle->setRect(40,40,100,100);
    scene->addItem(circle);
    QGraphicsEllipseItem *circle1 = new QGraphicsEllipseItem();
    circle1->setRect(20,20,100,100);
    scene->addItem(circle1);*/
    QGraphicsView *view = new QGraphicsView(scene);
    view->show();
    view->showMaximized();
    return a.exec();
}


