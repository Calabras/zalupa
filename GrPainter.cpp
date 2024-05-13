#include "GrPainter.h"

void GrPainter::setGr(Graphics^ _g) {
	g = _g;
}

void GrPainter::initIcons() {
	names = { "Wall", "Moneta", "EmptyCell", "Monster", "Hero" };
	for each (string name in names) {
		String^ tmp = gcnew String((name + ".ico").c_str());
		gcroot<Icon^> newIcon = gcnew Icon(tmp);
		icons[name] = newIcon;
	}
}

void GrPainter::paintCell(string fileName, int x, int y) {
	int drawX = x * cellPixelSize;
	int drawY = y * cellPixelSize;
	rect = Drawing::Rectangle(drawX, drawY, cellPixelSize, cellPixelSize);

	g->DrawIcon(icons[fileName], rect);
}

void GrPainter::Wall(int x, int y) {
	paintCell("Wall", x, y);
}
void GrPainter::Moneta(int x, int y) {
	paintCell("Moneta", x, y);
}
void GrPainter::EmptyCell(int x, int y) {
	paintCell("EmptyCell", x, y);
}
void GrPainter::Monster(int x, int y) {
	paintCell("Monster", x, y);
}
void GrPainter::Hero(int x, int y) {
	paintCell("Hero", x, y);
}