#define _USE_MATH_DEFINES
#include <cmath>
#include "Circle.h"
#include "../Tools/tools.h"
using namespace std;

#define ANGULAR_STEP 12

Circle::Circle(GLfloat r) :Shape(), r{ r } {}

Circle::Circle(GLfloat x, GLfloat y, GLfloat r) : Shape(x, y), r{ r } {}

GLenum Circle::getRenderType() const {
	return GL_POLYGON;
}

std::vector<Point> Circle::getVertices() const {
	vector<Point> retval;
	for (int i = 0; i < 360; i += ANGULAR_STEP) {
		retval.emplace_back((position.x + r * cos(i * M_PI / 180.0))/WINDOW_WIDTH/2, 
							(position.y + r * sin(i * M_PI / 180.0))/WINDOW_HEIGHT/2);
	}
	return retval;
}