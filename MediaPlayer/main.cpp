#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setApplicationName("Media Player");

    MainWindow w;
    w.setWindowTitle("Media Player");
    w.show();

    return a.exec();
}
