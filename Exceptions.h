class Exceptions {
public:
	virtual void show() = 0;
};
class WallExceptions : public Exceptions {
public :
	void show();
};
class MonstersExceptions : public Exceptions {
public:
	void show();
};
class HeroHealthExceptions : public Exceptions {
public:
	void show();
};
class HeroWin : public Exceptions {
public: 
	void show();
};