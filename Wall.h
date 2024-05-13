#include "Cell.h"
#include "Hero.h"
class Wall : public Cell {
public:
    virtual Cell* operator+(Hero& hero);
    virtual Cell* operator-(Hero& hero);
    //печать клетки
    virtual void print(ostream& out) const;
    //копирование стены
    virtual Cell* copy();

    virtual void visit(painter* p, int x, int y);
    virtual string getIcon();
};
