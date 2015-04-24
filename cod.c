#include <stdio.h>

unsigned int x;
char in;

void input(void);

void main(void){
  x = 0;
  input();
}

void input(void){
  printf(">> ");
  scanf("%c", &in);
  input();
}
