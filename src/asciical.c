#include "asciical.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

int drawScreen(struct Screen *ptrScreen) {
    if (ptrScreen == NULL) {
        perror("Null *ptrScreen value\n");
        return 1;
    }

    #if defined (ASCIICAL_POWERSHELL)
        printf("Drawn using Powershell!\n");
        
    #elif defined (ASCIICAL_BASH)
        printf("Drawn using Bash!\n")

    #else 
        perror("Undefined ASCIIcal terminal (i.e: 'ASCIICAL_BASH')\n");
        return 1;
    #endif

    return 0;
}

int clearScreen(struct Screen *ptrScreen) {
    if (ptrScreen == NULL) {
        perror("Null *ptrScreen value\n");
        return 1;
    }

    #if defined (ASCIICAL_POWERSHELL)
        printf("Cleared using Powershell!\n");
        
    #elif defined (ASCIICAL_BASH)
        printf("Cleared using Bash!\n")

    #else 
        perror("Undefined ASCIIcal terminal (i.e: 'ASCIICAL_BASH')\n");
        return 1;
    #endif

    return 0;
}