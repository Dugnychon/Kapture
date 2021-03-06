
#define CONSTANT

#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include "../../SDL/include/SDL.h"
#include <time.h>

#define TRUE 1
#define FALSE 0

// Map items
enum
{
    TERRAIN, FOREST, RIVER, FLAG_BASE_P0, FLAG_BASE_P1, CHARACTER0, CHARACTER1, CHARACTER2, CHARACTER3
};

// Settings
// Do not change the number of players, WIP
#define NBR_PLAYERS 2
#define NBR_TOUR_MAX 10

// Size of the Map
#define BLOCK_SIZE 32
#define NBR_BLOCK_X 28
#define NBR_BLOCK_Y 16
// Size of the game
#define SCREEN_WIDTH NBR_BLOCK_X * BLOCK_SIZE
#define SCREEN_HEIGHT NBR_BLOCK_Y * BLOCK_SIZE
// Offset is for the text at the bottom, size of the window (game + text)
#define WINDOW_OFFSET_X 0
#define WINDOW_OFFSET_Y 32
#define REAL_SCREEN_WIDTH NBR_BLOCK_X * BLOCK_SIZE + WINDOW_OFFSET_X
#define REAL_SCREEN_HEIGHT NBR_BLOCK_Y * BLOCK_SIZE + WINDOW_OFFSET_Y

#define PAWNS 5
#define FLAG_TAKEN 50
#define ALL 60
#define TWO 7

#define FLAG_P0_X 2
#define FLAG_P0_Y 7
#define FLAG_P1_X NBR_BLOCK_X - 3
#define FLAG_P1_Y 7

typedef struct PawnStruct
{
    int id;
    char type;
    int player_id;
    int flag;
    int max_displacement;
    int displacement_left;
    int alive;
    int start_pos_x;
    int start_pos_y;
    //SDL_Rect position;
} Pawn;


