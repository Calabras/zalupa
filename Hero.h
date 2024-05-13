#pragma once
#include <iostream>
using namespace std;
class Hero
{
	int i, j, coins, steps = 0;
public:
	//позиция персонажа (изменение позиции персонажа)
	int health = 3;
	Hero(int _i=0, int _j=0) {
		i = _i;
		j = _j;
	}
	//возвращает x
	int geti() const;
	//возвращает y
	int getj() const;
	//возвращает число монет
	int getcoins() const;
	//возвращаем число шагов героя
	int getsteps() const;
	//увеличить число шагов
	void addsteps();
	//увеличивает число монет
	void addcoins();
	//передвижение персонажа
	void move(int _i = 0, int _j = 0) {
		i = _i;
		j = _j;
	}
	//печать персонажа
	friend ostream& operator<<(ostream& out, const Hero& h);
	//убрать жизнь
	void removehealth();
	//вернуть число хп
	int gethealth() const;
};