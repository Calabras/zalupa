#include "Monsters.h"
#include "EmptyCell.h"
#include "HeroCell.h"
#include "Exceptions.h"
Monsters::Monsters() {}

Monsters::~Monsters() {}

//операция +
Cell* Monsters::operator+(Hero& hero) {
    hero.removehealth(); //отняли хп
    Monsterhealthremove();
    //if (hero.health == 0) throw HeroHealthExceptions();
    if ((hero.health>0 || hero.health==0) && Monstershealthzerocheck()  == true) {
        cout << "Total Healths: " << hero.gethealth() << " hp" << endl;
        return new HeroCell;
    }
    else {
        cout << "Total Healths: " << hero.gethealth() << " hp" << endl;
        throw MonstersExceptions();
    }
}

//операция -
Cell* Monsters::operator-(Hero& hero) {
    return new EmptyCell;
}
//вывод монеты на печать
void Monsters::print(ostream& out) const {
    out << "^";
}
int Monsters::gethealths() {
    cout << "Total Health: " << healthcount << " hp" << endl;
    return healthcount;
}
//копирование объекта
Cell* Monsters::copy() {
    return new Monsters(*this);
}

void Monsters::visit(painter* p, int x, int y)
{
    p->Monster(x, y);
}

string Monsters::getIcon()
{
    return "Monster";
}
