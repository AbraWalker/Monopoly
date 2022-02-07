#pragma once
#include "Random.h"
#include "cSquare.h"


class cBonus : public cSquare
{
private:
	void LandedOn(unique_ptr<cPlayer> &currPlayer, unique_ptr<cPlayer> &otherPlayer, board &monopolyBoard);
};