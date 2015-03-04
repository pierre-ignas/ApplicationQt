#include "jeuquizo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    JeuQuizo w;
    w.show();

    return a.exec();
}
