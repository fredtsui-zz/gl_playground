
#include <GLFW/glfw3.h>
#include <iostream>
#include <vector>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include "TestShapes.h"

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480

/*
using namespace std;

vector<shared_ptr<TestShape>> shapes;

void generateShapes() {
	shapes.emplace_back(make_shared<TestShape>(-32.0f, 32.0f, -24.0f, 24.0f));
}

void renderShapes() {
	for (shared_ptr<TestShape> it : shapes) {
		it->render();
		it->move();
	}
}

void onKeyPressed(GLFWwindow *window, int key, int scancode, int action, int mods);

int main(void)
{
	GLFWwindow* window;

	if (!glfwInit())
		return -1;

	window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Hello World", NULL, NULL);
	if (!window)
	{
		cout << "error opening the window" << endl;
		glfwTerminate();
		return -1;
	}
	int x, y;
	glfwGetWindowSize(window, &x, &y);
	cout << "the window size is " << x << y << endl;
	generateShapes();
	glfwSetKeyCallback(window, onKeyPressed);
	   
	glfwMakeContextCurrent(window);
	while (!glfwWindowShouldClose(window))
	{

		glClear(GL_COLOR_BUFFER_BIT);


		renderShapes();

		glfwSwapBuffers(window);

		this_thread::sleep_for(chrono::milliseconds(1));
		glfwPollEvents();
	}

	// close GL context and any other GLFW resources
	glfwTerminate();
	return 0;
}

void onKeyPressed(GLFWwindow *window, int key, int scancode, int action, int mods) {
	if (key == GLFW_KEY_UP || key == GLFW_KEY_DOWN || key == GLFW_KEY_LEFT || key == GLFW_KEY_RIGHT) {
		for (shared_ptr<TestShape> it : shapes) {
			it->change_dir(key);
		}
	}
}

*/
