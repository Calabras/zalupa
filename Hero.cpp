#include "Header.h"
#include "IOBserver.h"
#include "Hero.h"
#include "Exceptions.h"
//возвращает i
int Hero::geti() const { return i; }
//возвращает j
int Hero::getj() const { return j; }
//вывод персонажа на печать
ostream& operator<<(ostream& out, const Hero& h) {
	out << "R";
    return out;
}
//увеличивает число монет
void Hero::addcoins() {
	coins++; 
}
//возвращает число монет
int Hero::getcoins() const {
	return coins;
}
//возвращает число шагов героя
int Hero::getsteps() const {
	return steps;
}
//увеличить число шагов
void Hero::addsteps() {
	steps++;
}
//убрать жизнь
void Hero::removehealth() {
	health--;
	if (health == 0) throw HeroHealthExceptions();
}
//вернуть число хп
int Hero::gethealth() const {
	return health;
}
