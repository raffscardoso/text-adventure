#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void parse_execute(char* input){
  char *token = strtok(input, " ,");

  while (token != NULL) {
    if(strcmp(token, "look") == 0) {
      printf("It is to dark to see\n");
      return;
    }else if(strcmp(token,"item") == 0){
      printf("You have %d itens, type 'check' to see your itens.\n", 5);
      return;
    }
    token = strtok(NULL, " ,");
  }        
}
