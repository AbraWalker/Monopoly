#include "stdafx.h"

#include "cProperty.h"


void cProperty::LandedOn(unique_ptr<cPlayer> &currPlayer, unique_ptr<cPlayer> &otherPlayer, board &monopolyBoard)
{
	if (owner != NULL)
	{
		if (owner->piece != currPlayer->piece)
		{
			cout << currPlayer->piece << " pays " << POUND << rent << endl;
			currPlayer->money -= rent;
			otherPlayer->money += rent;
		}
	}
	else if (currPlayer->money > 0)
	{
		cout << currPlayer->piece << " pays " << POUND << cost << endl;
		currPlayer->money -= cost;
		owner = currPlayer.get();


		if (monopolyBoard[currPlayer->position - 1]->type == 1)
		{
			cProperty* tempProperty = static_cast<cProperty*>(monopolyBoard[currPlayer->position - 1].get()); //casting the base class into its child class so its member variables are accessible
			if (tempProperty->owner == currPlayer.get())
			{
				if (monopolyBoard[currPlayer->position - 2]->type == 1)
				{
					cProperty* tempProperty2 = static_cast<cProperty*>(monopolyBoard[currPlayer->position - 2].get());
					if (tempProperty2->owner == currPlayer.get())
					{
						rent *= 2;
						tempProperty->rent *= 2;
						tempProperty2->rent *= 2;

					}

				}
				else if (monopolyBoard[currPlayer->position + 1]->type == 1)
				{
					cProperty* tempProperty2 = static_cast<cProperty*>(monopolyBoard[currPlayer->position + 1].get());
					if (tempProperty2->owner == currPlayer.get())
					{
						rent *= 2;
						tempProperty->rent *= 2;
						tempProperty2->rent *= 2;


					}

				}
				else
				{
					rent *= 2;
					tempProperty->rent *= 2;
				}
			}
		}
		else if (monopolyBoard[currPlayer->position + 1]->type == 1)
		{
			cProperty* tempProperty = static_cast<cProperty*>(monopolyBoard[currPlayer->position + 1].get()); //casting the base class into its child class so its member variables are accessible
			if (tempProperty->owner == currPlayer.get())
			{
				if (monopolyBoard[currPlayer->position + 2]->type == 1)
				{
					cProperty* tempProperty2 = static_cast<cProperty*>(monopolyBoard[currPlayer->position + 2].get());
					if (tempProperty2->owner == currPlayer.get())
					{
						rent *= 2;
						tempProperty->rent *= 2;
						tempProperty2->rent *= 2;

					}

				}
				else
				{
					rent *= 2;
					tempProperty->rent *= 2;
				}
			}

		}


	}
}