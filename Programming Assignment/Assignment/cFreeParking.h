#pragma once
#include "cSquare.h"


class cFreeParking : public cSquare
{
private:
	void LandedOn(unique_ptr<cPlayer> &currPlayer, unique_ptr<cPlayer> &otherPlayer, board &monopolyBoard);
};