#ifndef COLOR_H
#define COLOR_H

/*
    Terminal colors supported
    by Phantom-Engine.
*/

typedef enum
{
    COLOR_DEFAULT,

    COLOR_BLACK,
    COLOR_RED,
    COLOR_GREEN,
    COLOR_YELLOW,
    COLOR_BLUE,
    COLOR_MAGENTA,
    COLOR_CYAN,
    COLOR_WHITE,
} Color;

/*
    Change the current text color.
*/
void terminal_set_color(Color color);

/*
    Restore the terminal default color.
*/
void terminal_reset_color(void);

#endif