#pragma once
#include "Shape.h"

class Line : public Shape {
	GLfloat r;
	Point a, b;
public:
	Line();
	Line(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);

	GLenum getRenderType() const override;

	std::vector<Point> getVertices() const override;
};