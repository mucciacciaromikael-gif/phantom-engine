#include <stdio.h>

#include "renderer.h"
#include "../terminal/terminal.h"

// Framebuffer
//
// This is the engine's virtual screen.
// The game writes here first.
// Then the renderer displays it.
static char framebuffer[SCREEN_HEIGHT][SCREEN_WIDTH];

void renderer_init() { renderer_clear(); }

void renderer_clear()
{
	for (int y = 0; y < SCREEN_HEIGHT; y++) {
		for (int x = 0; x < SCREEN_WIDTH; x++) {
			framebuffer[y][x] = ' ';
		}
	}
}

void renderer_set_pixel(int x, int y, char symbol)
{
	// Prevent writing outside the framebuffer
	if (x < 0 || x >= SCREEN_WIDTH) return;
	if (y < 0 || y >= SCREEN_HEIGHT) return;

	framebuffer[y][x] = symbol;
}

void renderer_draw()
{
	// Move cursor to beginning.
	//
	// We overwrite the previous frame.
	
	terminal_move_cursor(1,1);

	for (int y = 0; y < SCREEN_HEIGHT; y++) {
		for (int x = 0; x < SCREEN_WIDTH; x++) {
			putchar(framebuffer[y][x]);
		}
		putchar('\n');
	}

	// Force output immediately.
	// Important for games.
	fflush(stdout);
}
