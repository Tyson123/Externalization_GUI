#ifndef MYCIRCLE_H
#define MYCIRCLE_H
#include<QPushButton>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include<vector>

class MyCircle: public QObject, public QGraphicsEllipseItem{
public:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    static int mouse;
    int distance[37];

    MyCircle(int x, int y, int z)
    {
        if (z==0)
        {
            setRect(x,y,30,30);
        }
        else if(z==1)
        {
           setRect(x,y,500,500);
        }

    }
    MyCircle()
    {}
    virtual ~MyCircle()
    {}
};

#endif // MYCIRLCE_H
