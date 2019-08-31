#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsRectItem>
#include <QObject>
#include<QPushButton>
#include "MyCircle.h"
class NextScene: public MyCircle{
    Q_OBJECT
public:
    NextScene(QPushButton *btnuser);
    std::vector<int> store;
    void storedata();


};

#endif // BULLET_H
