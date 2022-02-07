#pragma once
#include "cSquare.h"


class cProperty : public cSquare //a class containing the properties of all the properties on the board
{
public:
	int cost;
	int rent;
	int group;
	bool mortgaged = false;
	cPlayer* owner = NULL;
	void LandedOn(unique_ptr<cPlayer> &currPlayer, unique_ptr<cPlayer> &otherPlayer, board &monopolyBoard);

};