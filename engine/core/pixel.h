#ifndef PIXEL_H
#define PIXEL_H

typedef struct
{
    char glyph;
    Color foreground;
    Color background;
} Pixel;

Pixel pixel_create(
    char glyph,
    Color foreground,
    Color background
);

Pixel pixel_default(void);

#endif