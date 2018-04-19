#include "mainwindow.h"
#include "Game.hpp"
#include "welcome.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Welcome WM;
    WM.show();
    //MainWindow w;
    //w.show();

    return a.exec();
}
