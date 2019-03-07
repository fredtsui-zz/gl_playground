#include "tools.h"
#include <GLFW/glfw3.h>
#include <vector>
void renderPlayingField(std::vector<Shape> shapes) {
	for (Shape it : shapes) {
		GLenum type = it.getRenderType();
		std::vector<Point> vertices = it.getVertices();
		glBegin(type);
		for (Point it : vertices) {
			glVertex2f(it.x, it.y);
		}
		glEnd();

	}
}