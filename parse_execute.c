#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "parse_execute.h"
#include "set_player_and_world.h"

void game_logic(char* input, Player *player, World *world){
  char *verb= strtok(input, " "); 
  char *noun = strtok(NULL, " ");                                   

  if(verb == NULL){
    printf("I didn't uderstand that.\n");
    return;
  }
  
  while (verb != NULL) {
    if(strcmp(verb, "look") == 0 && noun == NULL) {
      if(!strcmp(world->current_location, "Cavern")){
        printf("It is to dark to see.\n");
        return;
      }
      printf("I cannot look in that location.\n");
    }else if(strcmp(verb,"go") == 0 && noun != NULL){
      printf("You go %s\n", noun);
      return;
    }else if(strcmp(verb,"check") == 0 ){

    }else printf("I didn't understand that.\n");
    verb = strtok(NULL, " ");
  }        
}
