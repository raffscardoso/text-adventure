#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void parse_execute(char* input){
  char *verb= strtok(input, " "); // tokenize the input
  char *noun = strtok(NULL, " ");                                   

  if(verb == NULL){
    printf("I didn't uderstand that.\n");
    return;
  }
  
  while (verb != NULL) {
    if(strcmp(verb, "look") == 0 && noun == NULL) {
      printf("It is to dark to see\n");
      return;
    }else if(strcmp(verb,"go") == 0 && noun != NULL){
      printf("You go %s\n", noun);
      return;
    }else printf("I didn't uderstand that.\n");
    verb = strtok(NULL, " ");
  }        
}
