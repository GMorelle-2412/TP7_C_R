#include "TP7PartieQT.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    TP7PartieQT window;
    window.show();
    return app.exec();
}
