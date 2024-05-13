#include "Cell.h"
#include "Hero.h"
class Moneta : public Cell {
private:
    int coinscount=0; // cчетчик монет
    int totalcoints = 0;
public:
    Moneta();
    /*Moneta(char _val);*/
    ~Moneta();
    //операция +
    virtual Cell* operator+(Hero& hero);
    //операция -
    virtual Cell* operator-(Hero& hero);
    //печтать клетки
    virtual void print(ostream& out) const;
    //получить число монет
    virtual int getcoinscount();
    //копирование объекта
   virtual Cell* copy();
   //
   virtual void visit(painter* p, int x, int y);
   virtual string getIcon();
};