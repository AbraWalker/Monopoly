#include "stdafx.h"

#include "cGo.h"


void cGo::LandedOn(unique_ptr<cPlayer> &currPlayer, unique_ptr<cPlayer> &otherPlayer, board &monopolyBoard)
{
	cout << currPlayer->piece << " lands on GO" << endl;
	currPlayer->money += 200;

}
