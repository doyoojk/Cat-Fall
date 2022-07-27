#ifndef BOX_H 
#define BOX_H 
#include "gba.h"

typedef struct vector {
  int x; 
  int y; 
} Vector; 

// axis aligned bounding box 
typedef struct box {
  int x; 
  int y; 
  int w; 
  int h; 
} Box; 

int box_intersects(Box* a, Box* b);
int box_bottom_crossed(Box* box); 
int box_right_crossed(Box* box);
int box_left_crossed(Box* box);

void box_set(Box* box, int x, int y, int w, int h);
void box_move(Box* box, int dx, int dy);
void box_vmove(Box* box, Vector diff);  
void box_rand_item(Box* box, int w, int h); 
void box_rand_player(Box* box, int w, int h); 
void box_center(Box* box, int width, int height);
void box_center_top(Box* box, int width, int height);
void box_center_bottom(Box* box, int width, int height);
void box_fill(Box* box, u16 color);
void box_image(Box* box, const u16* img);

#endif 