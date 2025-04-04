#include <stdbool.h>
#include <stdio.h>
#include "parse_execute.h"


static char input_buffer[100];

static bool get_input(void){

  printf("\n -->");
  return fgets(input_buffer, sizeof(input_buffer), stdin) != NULL;
}
int main(){
  printf("Welcome to the cave adventure!\n");
  printf("It is very dark in here.\n");

  while(get_input()){

    parse_execute(input_buffer);
  }
  printf("Bye!\n");
  return 0;
}
