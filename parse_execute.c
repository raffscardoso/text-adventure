#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void parse_execute(char *input){
  char *token = strtok(input, " ,");

  for(int i = 0; i < sizeof(*token); i++){
    printf("%s\n", token);
    token = strtok(NULL," ,");
    if(strcmp(token, "quit") == 1){
      break;
    }
  }
        
}
