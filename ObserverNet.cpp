#include "ObserverNet.h"

void StepsNet::evnt_net(ModelNet^ g)
{
    steps->Text = "Total Steps: " + g->getSteps().ToString();
}

void MonetaNet::evnt_net(ModelNet^ g)
{
    moneta->Text = "Total Coins: " + g->getCoins().ToString();
}

void HPNet::evnt_net(ModelNet^ g)
{
    hp->Text = "Hero HP: " + g->getHeroHP().ToString();
}

void LabirintAroundNet::evnt_net(ModelNet^ g)
{
    g->displayLab(panel_labirint, cout);
}

void PositionINet::evnt_net(ModelNet^ g)
{
    positionI->Text = "Position I: " + g->getPositionI().ToString();
}

void PositionJNet::evnt_net(ModelNet^ g)
{
    positionJ->Text = "Position J: " + g->getPositiongJ().ToString();
}