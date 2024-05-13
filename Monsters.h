#include "Cell.h"
#include "Hero.h"
class Monsters : public Cell {
private:
    int healthcount = 3;
    int monsterhealth = 2;
public:
    Monsters();
    ~Monsters();
    //операция +
    virtual Cell* operator+(Hero& hero);
    //операция -
    virtual Cell* operator-(Hero& hero);
    //печтать клетки
    virtual void print(ostream& out) const;
    //получить число хп
    virtual int gethealths();
    //копирование стены
    virtual Cell* copy();

    virtual int Monsterhealth() const { return monsterhealth; }
    virtual void Monsterhealthremove() { monsterhealth--; }
    virtual bool Monstershealthzerocheck() {
        if (monsterhealth == 0) return true;
        return false;
    }

    virtual void visit(painter* p, int x, int y);
    virtual string getIcon();
};