#pragma once
#include "../Shapes/Circle.h"
#include "../Tools/tools.h"
#include "../Shapes/Line.h"

class Game {
private:
	const GLubyte COLOR_OPP[3] = { GLubyte(175), GLubyte(175), GLubyte(255) };
	const GLubyte COLOR_SLF[3] = { GLubyte(255), GLubyte(175), GLubyte(175) };
	const GLubyte COLOR_BAL[3] = { GLubyte(0), GLubyte(0), GLubyte(0) };

	Circle ball;
	Line *player1, *player2;
public:
	Game();
	Game(GLfloat ballSize);
	void init();
	void drawGameboard();
};