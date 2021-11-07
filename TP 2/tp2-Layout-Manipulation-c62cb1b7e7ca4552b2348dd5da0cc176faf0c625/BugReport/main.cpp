#include "bugreport.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BugReport w;
    w.show();
    return a.exec();
}
