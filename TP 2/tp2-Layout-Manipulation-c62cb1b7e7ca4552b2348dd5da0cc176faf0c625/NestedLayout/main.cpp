#include "nestedlayout.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    auto  window = new NestedLayout;
       window->setWindowTitle("Netsted layout test");
       window->show();
    return app.exec();
}
