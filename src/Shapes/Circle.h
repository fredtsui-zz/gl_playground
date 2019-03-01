#pragma once
#include "Shape.h"
class Circle : Shape {
protected:
	GLfloat r;
public:
	Circle(GLfloat r);
	
	Circle(GLfloat x, GLfloat y, GLfloat r);

	GLenum getRenderType() const override;

	std::vector<Point> getVertices() const override;
};