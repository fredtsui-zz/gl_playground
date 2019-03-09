#pragma once
#include "../Shapes/Circle.h"
#include "../Tools/tools.h"
#include "../Shapes/Line.h"

class Game {
private:
	Circle ball;
	Line *player1, *player2;
public:
	Game();
	Game(GLfloat ballSize);
	void init();
	void drawGameboard();
};