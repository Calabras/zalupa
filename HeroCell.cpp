#include "HeroCell.h"
#include "EmptyCell.h"

//операция +
Cell* HeroCell::operator+(Hero& hero) {
    return this;
}
//операция -
Cell* HeroCell::operator-(Hero& hero) {
    return new EmptyCell;
}
//вывод стенки на печать
void HeroCell::print(ostream& out) const {
    out << "R";
}
//копирование объекта
Cell* HeroCell::copy() {
    return new HeroCell(*this);
}

void HeroCell::visit(painter* p, int x, int y)
{
    p->Hero(x, y);
}

string HeroCell::getIcon()
{
    return "Hero";
}