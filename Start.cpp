#include "Header.h"
#include "Game.h"
#include <fstream>
#include "Exceptions.h"
#include "IOBserver.h"
#include "Start.h"
using namespace std;

void start_game() {
    Game g;
    g.readfromfile2("labirint2.txt"); //считывание лабиринта из многострочного файла
    g.TotalCoins();
    //начальная позиция
    g.setHeroPose(1, 1);


    //все наблюдатели
    ViewHealth healthView(cout);
    ViewPosition positionView(cout);
    ViewCoins coinsView(cout);
    ViewTotalSteps stepsView(cout);
    ViewLabirint labirintView(g, cout);


    g.addObserver(&healthView);
    g.addObserver(&positionView);
    g.addObserver(&coinsView);
    g.addObserver(&stepsView);
    g.addObserver(&labirintView);

    g.initPainter(new painter);


    Controller heroController(g);
    try {
        int val = _getch();
        while (val != 27) {
            system("cls");
            heroController.changepose(val);
            val = _getch();
        }
    }
    catch (HeroHealthExceptions& exceptions) {
        exceptions.show();
    }
    catch (HeroWin& exceptions) {
        exceptions.show();
    }
    cout << "Game over!" << endl;
    g.writeinfile("labirintend.txt"); //сохранили лабиринт в конце программы
}
