#include <memory>
#include "game.h"

Game::Game() : ball(10), player1{ nullptr }, player2{ nullptr } {}

Game::Game(GLfloat ballSize) : ball(ballSize), player1{ nullptr }, player2{ nullptr } {}

void Game::init() {}

void Game::drawGameboard() {

}
