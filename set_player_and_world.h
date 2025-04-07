#ifndef SET_PLAYER_AND_WORLD
#define SET_PLAYER_AND_WORLD

typedef struct Player {
  char *item1;
  char *item2;
  char *item3;

} Player;

typedef struct World {
  char *current_location;
  char *location_description;
} World;

Player set_player();

World set_world();

#endif // !SET_PLAYER_AND_WORLD
