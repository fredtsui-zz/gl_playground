#pragma once
#include "Shape.h"
class Square : Shape {
protected:
	GLfloat a;
public:
	Square(GLfloat a);
	Square(GLfloat x, GLfloat y, GLfloat a);

	GLenum getRenderType() const override;

	std::vector<Point> getVertices() const override;
};