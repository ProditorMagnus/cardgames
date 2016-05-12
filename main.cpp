#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}

// https://code.google.com/archive/p/vector-playing-cards/
// kasutab boosti
// kas diiler näeb mis kaardid mängija võttis
// kui on äss, 4, äss, emand, summa 16, või 26, või 36, kas see on >=17 nagu vaja?
// ning iga kord kui on äss, mida kasutatakse kui väiksemat et ei läheks üle 21
