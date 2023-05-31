
#ifndef UUC_GAME_STATE_H_
#define UUC_GAME_STATE_H_

#include <GLFW/glfw3.h>

typedef struct {
	GLFWwindow *window;
	int width, height;
} game_state_t;

extern game_state_t global_game;

int game_open_window();

#endif // UUC_GAME_STATE_H_
