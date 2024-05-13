#include "Game.h"
#include "IOBserver.h"

void ViewHealth::evnt(Game& g) {
		out << "Total Health: " << g.getHero().gethealth() << " hp" << endl;
}

void ViewPosition::evnt(Game& g) {
		out << "Current Position: (" << g.getHero().geti() << ";" << g.getHero().getj() << ")" << endl;
}

void ViewCoins::evnt(Game& g) {
		out << "Total Coins: " << g.getHero().getcoins() << endl;
}

void ViewTotalSteps::evnt(Game& g) {
    out << "Total Steps: " << g.getHero().getsteps() << endl;
}

void ViewLabirint::evnt(Game& g) {
	g.displayLab(out);
}


//контроллер передвижения героя
void Controller::changepose(int val) {
    int ip = g.getHero().geti();
    int jp = g.getHero().getj();
    switch (val) {
    case 80: // down
        g.setHeroPose(ip + 1, jp);
        break;
    case 72: //up
        g.setHeroPose(ip - 1, jp);
        break;
    case 75: //left
        g.setHeroPose(ip, jp - 1);
        break;
    case 77: //right
        g.setHeroPose(ip, jp + 1);
        break;
    }
}
