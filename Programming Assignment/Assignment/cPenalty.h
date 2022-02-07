#pragma once
#include "Random.h"

#include "cSquare.h"


class cPenalty : public cSquare
{
private:
	void LandedOn(unique_ptr<cPlayer> &currPlayer, unique_ptr<cPlayer> &otherPlayer, board &monopolyBoard);
};