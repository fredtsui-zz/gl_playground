#pragma once
#include <GLFW/glfw3.h>
#include <iostream>

class TestShape {
	struct Point {
		GLfloat x;
		GLfloat y;
		Point() : x{ 0.0f }, y{ 0.0f }{}

		Point(GLfloat x) : x{ x }, y{ x }{}

		Point(GLfloat x, GLfloat y) : x{ x }, y{ y }{}
	};
	Point center, momentum, bdLL, bdUR;



public:
	TestShape(GLfloat x1, GLfloat x2, GLfloat y1, GLfloat y2);

	void move();

	void render();

	void change_dir(int key);
};