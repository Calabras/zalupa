#pragma once
class Game;
class Hero;
class IOBserver {
public:
	virtual void evnt(Game & g) = 0; //событие
};

class ViewHealth : public IOBserver {
	ostream& out;
public:
	ViewHealth(ostream& _out) : out(_out) {};
	void evnt(Game& g);
};

class ViewPosition : public IOBserver {
	ostream& out;
public:
	ViewPosition(ostream& _out) : out(_out) {};
	void evnt(Game &g);
};

class ViewCoins : public IOBserver {
	ostream& out;
public:
	ViewCoins(ostream& _out) : out(_out) {};
	void evnt(Game& g);
};

class ViewTotalSteps : public IOBserver {
	ostream& out;
public:
	ViewTotalSteps(ostream& _out) : out(_out) {};
	void evnt(Game& g);
};

class ViewLabirint : public IOBserver {
	Game& g;
	ostream& out;
public:
	ViewLabirint(Game & _g, ostream& _out) : g(_g), out(_out) {};
	void evnt(Game& g);
};

class Controller {
	Game& g;
public:
	Controller(Game& _g) : g(_g) {}
	void changepose(int val);
};
