#pragma once
#include <GLFW/glfw3.h>
struct Point { 
	GLfloat x; 
	GLfloat y; 
	Point(): x{0.0f}, y{0.0f}{}

	Point(GLfloat x): x{x}, y{x}{}

	Point(GLfloat x, GLfloat y) : x{ x }, y{ y }{}
};