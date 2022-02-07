#pragma once

#include "cSquare.h"


class cJail : public cSquare
{
private:
	void LandedOn(unique_ptr<cPlayer> &currPlayer, unique_ptr<cPlayer> &otherPlayer, board &monopolyBoard);
};