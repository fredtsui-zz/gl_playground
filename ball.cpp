
#define _USE_MATH_DEFINES
#include <GLFW/glfw3.h>
#include <iostream>
#include <cmath>
#include "TestShapes.h"
using namespace std;

TestShape::TestShape(GLfloat x1, GLfloat x2, GLfloat y1, GLfloat y2) : center{ 0.0f,0.0f }, momentum{ 0.01f,0.01f }, bdLL{ x1, y1 }, bdUR{ x2, y2 } {}

void TestShape::move() {
	if (center.x + momentum.x > bdUR.x || center.x + momentum.x < bdLL.x) {
		momentum.x = 0 - momentum.x;
	}
	if (center.y + momentum.y > bdUR.y || center.y + momentum.y < bdLL.y) {
		momentum.y = 0 - momentum.y;
	}
	center.x += momentum.x;
	center.y += momentum.y;
}

void TestShape::render() {
	//cout << "current position: " << center.x << " " << center.y << endl;
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i += 12) {
		glVertex2f((center.x + 2 * sin(i * M_PI / 180)) / bdUR.x, (center.y + 2 * cos(i * M_PI / 180)) / bdUR.y);
	}
	glEnd();
}

void TestShape::change_dir(int key) {
	if (key == GLFW_KEY_UP && momentum.y < 0 ||
		key == GLFW_KEY_DOWN && momentum.y > 0) {
		momentum.y = 0 - momentum.y;
	}
	if (key == GLFW_KEY_LEFT && momentum.x > 0 ||
		key == GLFW_KEY_RIGHT && momentum.x < 0) {
		momentum.x = 0 - momentum.x;
	}
	return;
}