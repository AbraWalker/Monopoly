#include "stdafx.h"

#include "cAirport.h"

void cAirport::LandedOn(unique_ptr<cPlayer> &currPlayer, unique_ptr<cPlayer> &otherPlayer, board &monopolyBoard)
{
	if (owner != NULL)
	{
		if (owner->piece != currPlayer->piece)
		{
			cout << currPlayer->piece << " pays " << POUND << 10 << " of goods" << endl;
			currPlayer->money -= 10;
			otherPlayer->money += 10;
		}
	}
	else if (currPlayer->money > 0)
	{
		cout << currPlayer->piece << " pays " << POUND << 200 << endl;
		currPlayer->money -= 200;
		owner = currPlayer.get();
	}

}