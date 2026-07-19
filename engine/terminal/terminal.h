#ifndef TERMINAL_H
#define TERMINAL_H

/*
	Terminal abstraction layer.

	This module hides Linux ANSI escape sequences
	from the rest of the engine

	The game should never directly use:
		printf("\033[...");

	Instead it uses these functions.
*/

void terminal_clear();
void terminal_move_cursor(int x, int y);
void terminal_hide_cursor();
void terminal_show_cursor();

#endif
