#include "MyCircle.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QGraphicsSceneMouseEvent>
#include "NextScene.h"
#include<math.h>
#include <QDebug>
#include <QDir>
#include<QObject>
int MyCircle::mouse = 1;
void MyCircle::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(event->button() == Qt::LeftButton and mouse == 1)
    {
        //QPen pen;
        //MyCircle *rect2 = new MyCircle();
        //pen.setBrush(Qt::NoBrush);
        //setPen(pen);
        int sliderPositionsX[] ={397, 563, 702, 743, 702, 566, 397, 231, 91, 46, 91, 227, 397, 506, 596, 624, 597, 508, 397, 290,
                                199, 170, 198, 287, 397, 454, 501, 516, 502, 454, 397, 340, 292, 277, 292, 339, 397};
        int sliderPositionsY[] = {50, 96, 233, 400, 568, 705, 749, 707, 569, 400, 233, 97, 173, 203, 291, 400, 509, 599, 627, 601,
                                511, 400, 291, 203, 281, 296, 343, 400, 458, 504, 519, 505, 457, 400, 342, 296, 400};
        auto i = event->buttonDownPos(event->button());
        for (int k=0;k<37;k++) {
            distance[k] = sqrt(pow((sliderPositionsX[k]-i.y()),2)+pow((sliderPositionsY[k]-i.x()),2));
        }
        setBrush(Qt::cyan);
        //mouse++;
        //rect2->setRect(0,0,100,100);
        //scene()->addItem(rect2);
    }/*
    else {
        event->ignore();
    }*/
}



