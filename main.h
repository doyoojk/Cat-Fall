#ifndef MAIN_H
#define MAIN_H

#include "gba.h"
#include "box.h"

#define MAX_ITEMS 4

// TODO: Create any necessary structs

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

typedef struct player {
  Box boundary; 
  Vector velocity; 
  u16 color; 
} Player; 


typedef enum 
{
  FISH, 
  HEART, 
} itemType; 

typedef struct item {
  Box boundary;
  Vector velocity;
  int active;
  itemType type;  
  u16 color; 
} Item; 

typedef enum {
  START,
  PLAY,
  WIN,
  LOSE,
} gba_state;

typedef struct mainState {
  gba_state status;
  int score;
  int lives;  
  Player player; 
  Item basket; 
  Item objects[MAX_ITEMS]; 
  u32 currentButtons; 
  u32 previousButtons;  
} MainState; 

 
void game_init(MainState* game); 
void game_play(MainState* game);

#endif
