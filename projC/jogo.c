
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_ROOMS 10
#define MAX_ITEM 5

typedef struct {
    char name[50];
    char description[200];
} Item;

typedef struct {
    char description[200];
    Item items[MAX_ITEM];
    int num_items;
    int connected_rooms[MAX_ROOMS];
    int num_connections;
} Room;

Room rooms[MAX_ROOMS];
int current_room;

void clear_screen() {
    system("clear");
}

void print_room_description() {
    printf("\033[1;1H\033[J"); // Move cursor to top-left corner and clear screen
}
