#pragma once
#include "ModelNet.h"

public ref class StepsNet: ObserverNet
{
    Label^ steps;

public:
    StepsNet(Label^ _steps) : steps(_steps) {}
    void evnt_net(ModelNet^ g) override;
};

public ref class PositionINet : ObserverNet
{
    Label^ positionI;

public:
    PositionINet(Label^ _positionI) : positionI(_positionI) {}
    void evnt_net(ModelNet^ g) override;
};

public ref class PositionJNet : ObserverNet
{
    Label^ positionJ;

public:
    PositionJNet(Label^ _positionJ) : positionJ(_positionJ) {}
    void evnt_net(ModelNet^ g) override;
};


public ref class MonetaNet: ObserverNet
{
    Label^ moneta;

public:
    MonetaNet(Label^ _moneta) : moneta(_moneta) {}
    void evnt_net(ModelNet^ g) override;
};

public ref class HPNet:ObserverNet
{
    Label^ hp;

public:
    HPNet(Label^ _hp): hp(_hp) {}
    void evnt_net(ModelNet^ g) override;
};

public ref class LabirintAroundNet:ObserverNet
{
    Panel^ panel_labirint;
public:
    LabirintAroundNet(Panel^ _panel_labirint): panel_labirint(_panel_labirint) {}
    void evnt_net(ModelNet^ g) override;
};