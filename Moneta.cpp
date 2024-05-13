#include "Moneta.h"
#include "EmptyCell.h"
#include "HeroCell.h"

Moneta::Moneta() {}

Moneta::~Moneta() {}

//операция +
Cell* Moneta::operator+(Hero& hero) {
    hero.addcoins(); 
    cout << "Total Coins: " << hero.getcoins() << endl;
    return new HeroCell;
}
//операция -
Cell* Moneta::operator-(Hero& hero) {
    return new EmptyCell;
}
//вывод монеты на печать
 int Moneta::getcoinscount() { 
    cout << "Total Coins: " << coinscount << endl;
    return coinscount; 
 }

 //вывод монеты на печать
 void Moneta::print(ostream& out) const {
     out << "$";
 }

 //копирование объекта
Cell* Moneta::copy() {
     return new Moneta(*this);
 }

void Moneta::visit(painter* p, int x, int y)
{
    p->Moneta(x, y);
}

string Moneta::getIcon()
{
    return "Moneta";
}