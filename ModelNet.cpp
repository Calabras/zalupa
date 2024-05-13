#include "ModelNet.h"
#include "Exceptions.h"


void ModelNet::addObserverstoC() {
    OModel* tmp = new OModel(this);
    modelC->addObserver(tmp);
}

ModelNet::ModelNet() {
    modelC = new Game();
    modelC->readfromfile2("labirint2.txt");
    modelC->setHeroPose(1, 1);
    observers = gcnew List<ObserverNet^>(7);
    addObserverstoC();
}

ModelNet::~ModelNet() {
    delete modelC;
    for each (ObserverNet ^ observer in observers) {
        delete observer;
    }
    delete observers;
}

void ModelNet::update() {
    for each (ObserverNet ^ observer in observers) {
        observer->evnt_net(this);
    }
}

void ModelNet::move(ACTION act) {
    try {
        modelC->move(act);
    }
    catch (HeroHealthExceptions) {
        throw gcnew HeroHPNet();
    }
}

void ModelNet::addObserver(ObserverNet^ observer) {
    observers->Add(observer);
    update();
}

void ModelNet::displayLab(Panel^ panel, ostream& out) {
    if (painter == nullptr) {
        painter = new GrPainter(panel->CreateGraphics());
        modelC->initPainter(painter);
    }
    painter->setGr(panel->CreateGraphics());
    modelC->displayLab(cout);
}

void OModel::evnt(Game& model) {
    mNET->update();
}

void ControllerNet::step(int val)
{
    switch (val)
    {
    case 40:
        (*model).move(DOWN);
        break;
    case 38:
        (*model).move(UP);
        break;
    case 39:
        (*model).move(RIGHT);
        break;
    case 37:
        (*model).move(LEFT);
        break;
    }
}