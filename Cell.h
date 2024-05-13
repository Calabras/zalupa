#include <iostream>
#include "Hero.h"
#include "painter.h"
using namespace std;

#pragma once
class Cell {
protected:
	Hero* hero; //если не пустой, то отображается герой, если пустой, то ячейка просто отображается
public:
	//операция +
	virtual Cell* operator+(Hero& hero) = 0;
	//операция -
	virtual Cell* operator-(Hero& hero) = 0;

	//вывод символа клетки
	virtual void print(ostream& out) const = 0;
	//деструктор для клетки
	virtual ~Cell() {}

	//перегрузка функий ввода и вывода для клеток
	friend istream& operator>>(istream& in, Cell*& cell);
	friend ostream& operator<<(ostream& out, const Cell& cell);

	//копирование объекта
	virtual Cell* copy() = 0;

	virtual void visit(painter* p, int x, int y) = 0;
	virtual string getIcon() = 0;
};