#include "Square.h"
#include "../Tools/tools.h"
using namespace std;

Square::Square(GLfloat a):Shape(), a{ a } {}

Square::Square(GLfloat x, GLfloat y, GLfloat a) : Shape(x, y), a{ a } {}

GLenum Square::getRenderType() const {
	return GL_POLYGON;
}

std::vector<Point> Square::getVertices() const {
	vector<Point> retval;
	retval.emplace_back((position.x + a / 2) / WINDOW_WIDTH / 2, (position.y + a / 2) / WINDOW_HEIGHT / 2);
	retval.emplace_back((position.x + a / 2) / WINDOW_WIDTH / 2, (position.y - a / 2) / WINDOW_HEIGHT / 2);
	retval.emplace_back((position.x - a / 2) / WINDOW_WIDTH / 2, (position.y - a / 2) / WINDOW_HEIGHT / 2);
	retval.emplace_back((position.x + a / 2) / WINDOW_WIDTH / 2, (position.y + a / 2) / WINDOW_HEIGHT / 2);
	return retval;
}

