#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "parse_execute.h"
#include "set_player_and_world.h"


static char input_buffer[100];

static bool get_input(void){

  printf("\n -->");
  return fgets(input_buffer, sizeof(input_buffer), stdin) != NULL;
}
int main(){
  printf("Welcome to the cave adventure!\n");
  printf("It is very dark in here.\n");
  if(get_input()){
    Player main = set_player_and_world();
    input_buffer[strcspn(input_buffer, "\n")] = 0; // strcspn(): removes the \n
    parse_execute(input_buffer);
  }
  printf("Bye!\n");
  return 0;
}
