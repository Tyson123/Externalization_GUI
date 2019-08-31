#include "NextScene.h"
#include <QTimer>
#include "MyCircle.h"
#include <QDir>
NextScene::NextScene(QPushButton *btnuser){
    QObject::connect(btnuser,SIGNAL(clicked()),this,SLOT(storedata()));
}

void NextScene::storedata()
{
    int smallestIndex = 0;
    for (int index = smallestIndex; index < 37; index++)
    {
        //auto now = MyCircle::distance[smallestIndex];
        if (MyCircle::distance[smallestIndex] > MyCircle::distance[index])
        {
                smallestIndex = index;
        }
    }
    store.push_back(smallestIndex);
    QString _curentpath = QDir::currentPath();
    auto df = 0;

}
