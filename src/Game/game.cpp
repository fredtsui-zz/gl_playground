#include <memory>
#include "game.h"

Game::Game() : ball(50), player1{ nullptr }, player2{ nullptr } {}

Game::Game(GLfloat ballSize) : ball(ballSize), player1{ nullptr }, player2{ nullptr } {}

void Game::init() {}

void Game::drawGameboard() {
	// first mark each player's tiles by filling each side with 
	// different colors
	glColor3ubv(COLOR_SLF);
	glBegin(GL_POLYGON);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(-1.0f, 0.0f);
	glEnd();

	glColor3ubv(COLOR_OPP);
	glBegin(GL_POLYGON);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(1.0f, 0.0f);
	glEnd();

	glColor3ubv(COLOR_BAL);

	// then draws the ball
	std::vector<Point> vertices = ball.getVertices();
	glBegin(ball.getRenderType());
	for (auto it : vertices) {
		glVertex2f(it.x, it.y);
	}
	glEnd();
}
