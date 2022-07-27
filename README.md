# "KITTY FALL" Game
## By. Jamie Kim

### How to play:
Kitty is a simple cat. All she needs is her fish and her warm basket. Use your arrow keys to guide falling Kitty back into her basket.
Everytime Kitty is fed or led to her basket, you earn 1 point. Earn 10 points in total to make Kitty the happiest cat in the world!

### Controls:
LEFT = Move left 
RIGHT = Move right
DOWN = Speed up player
BACKSPACE = Play Again!
SELECT = Restart

### How I made it:
- This was implemented by accessing the GBA devices (screen, buttons) via memory-mapped I/O.
- To optimize the performance I used DMA (Direct Memory Access) controllers to accelerate tasks such as writing the graphics buffer to show images in the game. 
- Implemented a state-machine to help transition between the start screen, game screen, and result screen

![](https://github.com/doyoojk/Cat-Fall/blob/main/images/catFallEx.gif)
