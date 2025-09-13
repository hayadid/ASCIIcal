#ifndef ASCIICAL_H
#define ASCIICAL_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#define ROWS 40
#define COLS 20

#define ASCIICAL_POWERSHELL

typedef struct Pixel {
    uint8_t charColor;
    uint8_t backColor;
    char character;
} Pixel;

// TODO: pixel dimensions at compile time
typedef struct Screen {
    size_t rows;
    size_t cols;
    bool isDrawn;
    Pixel pixels[ROWS][COLS];
} Screen;

// Draws to the terminal based on screen's pixels matrix
int drawScreen(Screen *ptrScreen);

// Clears screen via command (DOESN'T ALTER PIXELS MATRIX)
int clearScreen(Screen *ptrScreen);

#endif