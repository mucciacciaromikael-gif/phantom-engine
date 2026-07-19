#include "../engine/renderer/renderer.h"
#include "../engine/terminal/terminal.h"

int main()
{
	// Prepare terminal
	terminal_clear();
	terminal_hide_cursor();

	// Start renderer
	renderer_init();

	// Draw objects.
	//
	// For now:
	// 	@ = player
	// 	# = wall
	// 	M - monster
	renderer_set_pixel(10,5,'@');
	renderer_set_pixel(20,5,'#');
	renderer_set_pixel(30,5,'M');

	// Display frame
	renderer_draw();

	// Restore terminal
	terminal_show_cursor();

	return 0;
}
