// Assignment.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "monopolyManager.h"

int main()
{
	unique_ptr<monopolyManager> gameManager(new monopolyManager);
	gameManager->start();
}

