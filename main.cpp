#include "mainwindow.h"
#include <QApplication>
#include <QProcess>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    print("hello world");
    w.show();

    return a.exec();
}
