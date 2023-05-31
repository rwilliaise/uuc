
#include <GLFW/glfw3.h>
#include <stdio.h>

#include "game_state.h"

game_state_t global_game;

void glfw_handle_error(int error_code, const char *description) {
	fprintf(stderr, "GLFW ERROR (0x%.2x): %s", error_code, description);
}

int main(int argc, char *argv[]) {
	glfwSetErrorCallback(glfw_handle_error);

	if (glfwInit() != GLFW_TRUE) {
		return 1;
	}

	GLFWwindow *window = glfwCreateWindow(640, 480, "uuc", NULL, NULL);



	return 0;
}

