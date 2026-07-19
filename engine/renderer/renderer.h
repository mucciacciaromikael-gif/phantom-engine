#ifndef RENDERER_H
#define RENDERER_H

// Scren dimensions.
// Terminal games usually use characters as pixels
#define SCREEN_WIDTH 80
#define SCREEN_HEIGHT 25


// Initialize renderer
void renderer_init();

// Clear framebuffer
void renderer_clear();

// Put a character in the framebuffer.
//
// x,y = position
// symbol = character displayed
void renderer_draw();

void renderer_set_pixel(int x, int y, char symbol);

#endif
