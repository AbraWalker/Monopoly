#pragma once

#include "cSquare.h"

class cAirport : public cSquare
{
public:
	cPlayer* owner = NULL;
	void LandedOn(unique_ptr<cPlayer> &currPlayer, unique_ptr<cPlayer> &otherPlayer, board &monopolyBoard);
};