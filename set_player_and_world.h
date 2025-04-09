#ifndef SET_PLAYER_AND_WORLD
#define SET_PLAYER_AND_WORLD

typedef struct Player {
  char *itens[5];

} Player;

typedef struct World {
  char *current_location;
  char *location_description;
} World;

Player set_player();

World set_world();

#endif // !SET_PLAYER_AND_WORLD
