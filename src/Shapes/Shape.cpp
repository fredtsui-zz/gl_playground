#include "Shape.h"

std::vector<Point> Shape::getVertices() const {
	std::vector<Point> empty;
	return empty;
}

GLenum Shape::getRenderType() const {
	return GL_POLYGON;
}
