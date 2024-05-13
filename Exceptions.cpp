#include "Exceptions.h"
#include <iostream>
using namespace std;

void WallExceptions::show() {
		cout << "Wall!" << endl;
}
void MonstersExceptions::show() {
		cout << "Monsters!" << endl;
}
void HeroHealthExceptions::show() {
		cout << "Hero health`s is zero!" << endl;
}
void HeroWin::show() {
		cout << "You collected all coins! You win!" << endl;
}