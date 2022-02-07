#include "stdafx.h"

#include "cBonus.h"



void cBonus::LandedOn(unique_ptr<cPlayer> &currPlayer, unique_ptr<cPlayer> &otherPlayer, board &monopolyBoard)
{
	int currBonus = Random();
	int foundMoney = 20;
	int winContest = 50;
	int taxRebate = 100;
	int winLottery = 150;
	int bequest = 200;
	int birthday = 300;

	if (currBonus == 1)
	{
		cout << "Find some money. Player gains " << POUND << foundMoney << endl;
		currPlayer->money += foundMoney;
	}
	else if (currBonus == 2)
	{
		cout << "Win competition. Player gains " << POUND << winContest << endl;
		currPlayer->money += winContest;
	}
	else if (currBonus == 3)
	{
		cout << "Tax rebate. Player gains " << POUND << taxRebate << endl;
		currPlayer->money += taxRebate;
	}
	else if (currBonus == 4)
	{
		cout << "Win lottery. Player gains " << POUND << winLottery << endl;
		currPlayer->money += winLottery;
	}
	else if (currBonus == 5)
	{
		cout << "Bequest. Player gains " << POUND << bequest << endl;
		currPlayer->money += bequest;
	}
	else if (currBonus == 6)
	{
		cout << "Birthday. Player gains " << POUND << birthday << endl;
		currPlayer->money += birthday;
	}

}