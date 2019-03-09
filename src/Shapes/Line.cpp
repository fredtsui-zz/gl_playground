#include "Line.h"
#include "../Tools/tools.h"
#define HORIZONTAL_STEP 1
Line::Line(): Shape(), a{0.0f, 0.0f}, b{0.0f, 0.0f} {}

Line::Line(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2): 
	Shape(), a{ x1, y1 }, b{ x2, y2 } {}

GLenum Line::getRenderType() const {
	return GL_LINES;
}

std::vector<Point> Line::getVertices() const {
	GLfloat vDrop = b.y - a.y;
	GLfloat step = HORIZONTAL_STEP;
	if (a.x > b.x) step = -step;
	std::vector<Point> retval;
	for (GLfloat x = a.x; x < b.x; x += step) {
		retval.emplace_back(x / WINDOW_WIDTH / 2, (a.y + vDrop * (x - a.x) / (b.x - a.x)) / WINDOW_HEIGHT / 2);
	}
	return retval;
}