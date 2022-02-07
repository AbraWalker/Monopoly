#pragma once
#include "cPlayer.h"
#include "Definitions.h"

class cSquare //a class containing the properties of each individual square
{
public:
	int type;
	string name = "";
	virtual void LandedOn(unique_ptr<cPlayer> &currPlayer, unique_ptr<cPlayer> &otherPlayer, board &monopolyBoard) = 0;
	//virtual ~cSquare();
};