// ----------------------------------------------------------------
// From Game Programming in C++ by Sanjay Madhav
// Copyright (C) 2017 Sanjay Madhav. All rights reserved.
// 
// Released under the BSD License
// See LICENSE in root directory for full details.
// ----------------------------------------------------------------

#include "Game.h"
#include <iostream> // CHCH

#include "AnimSpriteComponent.h"

//class  AnimSpriteComponent; // CHCH
//extern  AnimSpriteComponent* CHCH_asc; // CHCH
extern  class AnimSpriteComponent* CHCH_asc; // CHCH

int main(int argc, char** argv)
{
	Game game;
	bool success = game.Initialize();
	if (success)
	{
		std::cout << "1 asc 林家: " << CHCH_asc << std::endl; // CHCH
		game.RunLoop();
		std::cout << "2 asc 林家: " << CHCH_asc << std::endl; // CHCH
	}
	std::cout << "3 asc 林家: " << CHCH_asc << std::endl; // CHCH
	game.Shutdown();

	std::cout << "4 asc 林家: " << CHCH_asc << std::endl; // CHCH

	if (CHCH_asc == nullptr)
		std::cout << "NULL\n";

	std::cout << "GetAnimFPS: " << CHCH_asc->GetAnimFPS() << std::endl;
	std::cout << "TexHeight: " << CHCH_asc->GetTexHeight() << std::endl;
	std::cout << "mAnimTextures.size: " << CHCH_asc->mAnimTextures.size() << std::endl;
	
	
	//////

	return 0;
}
