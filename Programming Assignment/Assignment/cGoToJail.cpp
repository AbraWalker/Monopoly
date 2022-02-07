#include "stdafx.h"

#include "cGoToJail.h"


void cGoToJail::LandedOn(unique_ptr<cPlayer> &currPlayer, unique_ptr<cPlayer> &otherPlayer, board &monopolyBoard)
{
	cout << currPlayer->piece << " goes to Jail" << endl;
	cout << currPlayer->piece << " pays " << POUND << 50 << endl;
	currPlayer->money -= 50;
	currPlayer->position = 6;

}
