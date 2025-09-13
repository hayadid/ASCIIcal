#include <stdlib.h>
#include <stdio.h>
// #include <wchar.h>
// #include <windows.h>
#define ASCIICAL_POWERSHELL
#include "asciical.h"

// #define ASCIICAL_BASH

int main() {
    
    // HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    // if (hOut == INVALID_HANDLE_VALUE)
    // {
    //     return GetLastError();
    // }

    // DWORD dwMode = 0;
    // if (!GetConsoleMode(hOut, &dwMode))
    // {
    //     return GetLastError();
    // }

    // dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    // if (!SetConsoleMode(hOut, dwMode))
    // {
    //     return GetLastError();
    // }

    // wprintf(L"\x1b[31mThis text has a red foreground using SGR.31.\r\n");

    // return 0;

    struct Screen screen = {
        .cols = COLS,
        .rows = ROWS,
        .isDrawn = false
    };

    drawScreen(&screen);

    clearScreen(&screen);
}