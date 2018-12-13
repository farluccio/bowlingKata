#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "game.h"

TEST_CASE("Does the Game Exist","[score]")
{

    // Arrange
    Game *g =new Game;

    // Act

    // Assert
    REQUIRE(g != NULL);

}

TEST_CASE("Gutter Game Return 0","[score]")
{

    // Arrange
    Game g;
    int pins = 0;
    // Act
    for(int frame = 0; frame < 20; frame++)
    {
        g.roll(pins);
    }

    // Assert
    REQUIRE(0 == g.scoreGame());

}

TEST_CASE("Single Pin Game Return 20","[score]")
{

    // Arrange
    Game g;
    int pins = 1;
    // Act
    for(int frame = 0; frame < 20; frame++)
    {
        g.roll(pins);
		
    }

    // Assert
    REQUIRE(20 == g.scoreGame(runningScore));

}

TEST_CASE("Roll 5,5,3 Game Return 16","[score]")
{

    // Arrange
    Game g;
    int pins = 1;
    // Act
	for(int frame = 0; frame < 2; frame++)
    {
		for(throwBall = 0; throwBall < 2; roll++)
		{
			g.roll(5);
		}
    }
    for(int frame = 0; frame < 10; frame++)
    {
		for(throwBall = 0; throwBall < 2; roll++)
		{
			g.roll(pins);
		}
    }

    // Assert
    REQUIRE(20 == g.scoreGame(runningScore));

}