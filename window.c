
#include "game_state.h"

int game_open_window() {
	GLFWwindow *window;

	if (glfwInit() != GLFW_TRUE) {
		return 1;
	}

	window = glfwCreateWindow(640, 480, "uuc", NULL, NULL);
	global_game.window = window;

	return 0;
}

