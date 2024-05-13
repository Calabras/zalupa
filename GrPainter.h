#pragma once
#include "Game.h"
#include <vcclr.h>
#include <vector>
#include <sstream>
#include <map>

using namespace std;
using namespace System;
using namespace System::Drawing;
using namespace System::Collections::Generic;


class GrPainter : public painter {
	gcroot < Graphics^> g;
	map<string, gcroot < Icon^>> icons;
	vector<string> names;

	int cellPixelSize = 40;
	Drawing::Rectangle rect;

public:
	GrPainter() { initIcons(); }
	GrPainter(Graphics^ _g) :g(_g) { initIcons(); }

	void setGr(Graphics^ _g);

	void initIcons();

	virtual void paintCell(string fileName, int x, int y);

	virtual void Wall(int x, int y);
	virtual void Moneta(int x, int y);
	virtual void EmptyCell(int x, int y);
	virtual void Monster(int x, int y);
	virtual void Hero(int x, int y);
};