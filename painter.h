#pragma once
#include <iostream>

using namespace std;

class painter {
	ostream& out;

public:
	painter(ostream& _out = cout) :out(_out) {}
	virtual void Wall(int x, int y) { out << "#"; }
	virtual void Moneta(int x, int y) { out << "$"; }
	virtual void EmptyCell(int x, int y) { out << " "; }
	virtual void Monster(int x, int y) { out << "^"; }
	virtual void Hero(int x, int y) { out << "R"; }
};