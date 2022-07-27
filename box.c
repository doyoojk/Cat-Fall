#include "box.h"

// Returns true if the two bounding Boxes intersect
int box_intersects(Box* a, Box* b) {
  return ((a->x > b->x + b->w || b->x > a->x + a->w) || (a->y > b->y + b->h || b->y > a->y + a->w)) ? 0 : 1; 
}

int box_bottom_crossed(Box* box) {
  return (box->y > HEIGHT); 
}

int box_left_crossed(Box* box) {
  return (box->x < 0); 
}

int box_right_crossed(Box* box) {
  return (box->x + box->w > WIDTH); 
}

void box_set(Box* box, int x, int y, int w, int h) {
  box->x = x; 
  box->y = y; 
  box->w = w; 
  box->h = h;   
}

void box_move(Box* box, int dx, int dy) {
  box->x += dx; 
  box->y += dy;  
}

void box_vmove(Box* box, Vector diff) {
  box->x += diff.x; 
  box->y += diff.y; 
}

// place items randomly on screen
void box_rand_item(Box* box, int w, int h) {
  box_set( box, 
            randint(10, WIDTH - w - 10), 
            randint(30, HEIGHT - h - 30),
            w, 
            h 
  ); 
}

// place player randomly on top of screen
void box_rand_player(Box* box, int w, int h) {
  box_set( box, 
            randint(30, WIDTH - w - 30), 
            0,
            w, 
            h 
  ); 
}

void box_center(Box* box, int width, int height) {
  box_set(box, (WIDTH-width)/2, (HEIGHT-height)/2, width, height); 
}

void box_center_top(Box* box, int width, int height) {
  box_set(box, (WIDTH-width)/2, 0, width, height); 
}

void box_center_bottom(Box* box, int width, int height) {
  box_set(box, (WIDTH-width)/2, HEIGHT - height, width, height); 
}

void box_fill(Box* box, u16 color) {
  drawRectDMA(box->y, box->x, box->w, box->h, color); 
}

void box_image(Box* box, const u16* img) {
  drawImageDMA(box->y, box->x, box->w, box->h, img); 
}
