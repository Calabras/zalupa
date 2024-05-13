#pragma once
#include "Game.h" 
#include <vector>
#include "vcclr.h"
#include "IOBserver.h"
#include "ExceptionNet.h"
#include "GrPainter.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Drawing;
using namespace System::Windows::Forms;

ref class ModelNet;

public ref class ObserverNet abstract {
public:
    virtual void evnt_net(ModelNet^ model) = 0;
};

public ref class ModelNet {
private:
    GrPainter* painter;
    Game* modelC;
    List<ObserverNet^>^ observers;
    void addObserverstoC();
public:

    ModelNet();
    ~ModelNet();
    void update();
    void move(ACTION act);
    void addObserver(ObserverNet^ observer);
    int getHeroHP() { return modelC->getHero().gethealth(); }
    int getSteps() { return modelC->getHero().getsteps(); }
    int getCoins() { return modelC->getHero().getcoins(); }
    int getPositionI() { return modelC->getHero().geti(); }
    int getPositiongJ() { return modelC->getHero().getj(); }
    void displayLab(Panel^ panel, ostream& out);

};

class OModel : public IOBserver {
    gcroot<ModelNet^> mNET;
public:
    OModel(ModelNet^ _mNET) : mNET(_mNET) {}
    void evnt(Game& model);
};

public ref class ControllerNet {
    ModelNet^ model;
public:
    ControllerNet(ModelNet^ _model) : model(_model) {}
    void step(int val);
};