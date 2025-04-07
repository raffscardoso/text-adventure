#include <stdio.h>
#include "set_player_and_world.h"

Player set_player(){
  Player main_player;
  main_player.item1 = "lantern";
  return main_player;
}

World set_world(){
  World world;
  world.current_location = "Cavern";
  world.location_description = "It is very cold in here.";
  return world;
}
