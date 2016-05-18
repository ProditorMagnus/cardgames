#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}

// +kas diiler näeb mis kaardid mängija võttis -- jah - ikka võta kaarte kui pole parem seis kui mängijal

// https://code.google.com/archive/p/vector-playing-cards/
// +kasutab boosti -- võib
// +-- kui mängija lõhki siis diiler võidab
// +kui on äss, 4, äss, emand, summa 16, või 26, või 36, kas see on >=17 nagu vaja? -- võib, ei pea
// +ning iga kord kui on äss, mida kasutatakse kui väiksemat et ei läheks üle 21

// +Klassil peab olema meetod (näiteks klassimeetod), mis etteantud käe (klassi Hand instants)
// +jaoks tagastab selle väärtuse. - NÄITEKS klassimeetod, siis sobib ka tavaline, doesnt need to be static

// +Kas pokkeri jaoks sobib long long või peab efektiivsemalt tegema, tegelikult optimaalse väärtustamise korral oleks isegi short piisav -- sobib



// graafilise osa asi ainult
// käsi on alati seesmiselt sorteeritud(väärtustamise algoritm tugineb sellele). kas võib ka näidata seda sellisena, või näitamise peab tegema
// juhuslikus järjekorras? kui kaarte vahetada,
// kas siis peavad täituma augud uute kaartidega, peavad uued kaardid minema ühte serva. või võin näidata nii nagu tahan. -- eeldan et
// nagu tahan



// tuleb näidata, mis valikud arvuti tegi

// võib ühe programmina, aga teen kahena ikkagi
