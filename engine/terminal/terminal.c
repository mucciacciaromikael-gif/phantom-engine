#include <stdio.h>

#include "terminal.h"

/*
	Clear the terminal screen.

	ANSI command:
		ESC[2J

	means:
		Clear entire screen.
*/
void terminal_clear()
{
	printf("\033[2J");

	// Move cursor back to top-left.
	// ESC[H
	printf("\033[H");
}

/*
	Move terminal cursor.

	x = column
	y = row

Example:
	terminal_move_cursor(10,5);
*/
void terminal_move_cursor(int x, int y)
{
	printf("\033[%d;%dH", y, x);
}

/*
	Hide terminal cursor.

	Useful for games bc
	the cursor should not blink
	while rendering.
*/
void terminal_hide_cursor()
{
	printf("\033[?251");
}

/*
	Show terminal cursor again.

	Important when the program exits.
*/
void terminal_show_cursor()
{
	printf("\033[?25h");
}
