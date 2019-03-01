#pragma once
#include "Point.h"
#include <vector>

class Shape {
protected:
	Point position;
	
public:
	Shape() : position{ 0.0f,0.0f } {}
	
	Shape(GLfloat x, GLfloat y) : position{ x, y } {}

	virtual GLenum getRenderType() const;
	
	virtual std::vector<Point> getVertices() const;
	
	GLfloat getX() const { return position.x; }

	GLfloat getY() const { return position.y; }

	void setX(GLfloat x) { position.x = x; }

	void setY(GLfloat y) { position.y = y; }
};