#ifndef MAIN_H
#define MAIN_H
#define SCREEN_WIDTH 240
#define SCREEN_HEIGHT 160
#include "gba.h"


// TODO: Create any necessary structs

struct rect {
    int row;
    int col;
    int width;
    int height;
};
// Struct for the princess
struct princess {
    struct rect position;
    int is_active;  // Flag to indicate if the princess is active (not hit)
};

// Struct for the goblin
struct goblin {
    struct rect position;
    int is_active;  // Flag to indicate if the goblin is active (not hit)
};

/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/

#endif
