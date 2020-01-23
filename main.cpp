#include "mainwindow.h"

#include <QApplication> //handles widgets, mouse movements, overall gui basically

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
