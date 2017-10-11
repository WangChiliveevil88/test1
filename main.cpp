#include "mainwindow.h"
#include <QApplication>
#include <QtWidgets>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


       QWidget *widget = new QWidget;
        widget->resize(400, 300);   //

        QVBoxLayout *layout = new QVBoxLayout;
        QMediaPlayer* player = new QMediaPlayer;
        QVideoWidget* vw = new QVideoWidget;

        layout->addWidget(vw);
        widget->setLayout(layout);

        player->setVideoOutput(vw);

        QFile file("123.mp4");
        if(!file.open(QIODevice::ReadOnly))
            qDebug() << "Could not open file";

        player->setMedia(QUrl::fromLocalFile("123.mp4"));
        player->play();
        widget->show();

    return a.exec();
}
