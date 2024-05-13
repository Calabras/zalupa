#include "EmptyCell.h"
#include "HeroCell.h"
Cell* EmptyCell::operator+(Hero& hero) {
    return new HeroCell;
}
//операция -
Cell* EmptyCell::operator-(Hero& hero) {
    return this;
}
//вывод стенки на печать
void EmptyCell::print(ostream& out) const {
    out << " ";
}
//копирование объекта
Cell* EmptyCell::copy() {
    return new EmptyCell(*this);
}

void EmptyCell::visit(painter* p, int x, int y)
{
    p->EmptyCell(x, y);
}

string EmptyCell::getIcon()
{
    return "EmptyCell";
}