#include "stdafx.h"

#include "cPenalty.h"


void cPenalty::LandedOn(unique_ptr<cPlayer> &currPlayer, unique_ptr<cPlayer> &otherPlayer, board &monopolyBoard)
{
	int currPenalty = Random();
	int foodBill = 20;
	int phoneBill = 50;
	int heatingBill = 100;
	int vehicleBill = 150;
	int fuelBill = 200;
	int windfallBill = 300;

	if (currPenalty == 1)
	{
		cout << "Pay food bill. Player loses " << POUND << foodBill << endl;
		currPlayer->money -= foodBill;
	}
	else if (currPenalty == 2)
	{
		cout << "Pay phone bill. Player loses " << POUND << phoneBill << endl;
		currPlayer->money -= phoneBill;
	}
	else if (currPenalty == 3)
	{
		cout << "Pay heating bill. Player loses " << POUND << heatingBill << endl;
		currPlayer->money -= heatingBill;
	}
	else if (currPenalty == 4)
	{
		cout << "Pay vehicle tax. Player loses " << POUND << vehicleBill << endl;
		currPlayer->money -= vehicleBill;
	}
	else if (currPenalty == 5)
	{
		cout << "Pay fuel bill. Player loses " << POUND << fuelBill << endl;
		currPlayer->money -= fuelBill;
	}
	else if (currPenalty == 6)
	{
		cout << "Pay windfall tax. Player loses " << POUND << windfallBill << endl;
		currPlayer->money -= windfallBill;
	}

}