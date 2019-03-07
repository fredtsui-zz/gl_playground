#include <iostream>
#include "Shapes/Circle.h"
#include "Tools/tools.h"
#include <thread>
#include <chrono>
int main(void)
{
	std::shared_ptr<Shape> c{ new Circle{0.0f, 0.0f, 1.0f} };
	std::vector<std::shared_ptr<Shape>> shapes;
	shapes.push_back(c);
	GLFWwindow* window;

	if (!glfwInit())
		return -1;

	window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Hello World", NULL, NULL);
	if (!window)
	{
		std::cout << "error opening the window" << std::endl;
		glfwTerminate();
		return -1;
	}
	int x, y;
	glfwGetWindowSize(window, &x, &y);

	glfwMakeContextCurrent(window);
	while (!glfwWindowShouldClose(window))
	{

		glClear(GL_COLOR_BUFFER_BIT);



		glfwSwapBuffers(window);

		std::this_thread::sleep_for(std::chrono::milliseconds(1));
		glfwPollEvents();
	}

	// close GL context and any other GLFW resources
	glfwTerminate();
	return 0;
}