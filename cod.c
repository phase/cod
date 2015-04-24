#include <stdio.h>

unsigned int x;
char in;

void input(void);
void run(char c);

void main(void){
  x = 0;
  input();
}

void input(void){
  printf(">> "); /* Bash-like input */
  scanf("%c", &in); /* Get char input */
  run(in);
  input(); /* Loop */
}

void run(char c){
 /* Boundary checks */
  if(x == 256 || x == -1) x = 0;
  
  /* Operators */
  switch(in){
    case 'i': case 'x':
      x++;
    case 'd':
      x--;
    case 'o': case 'c':
      printf("%d\n", x);
    case 's': case 'k':
      x = x*x;
    default:
      printf("\n");
  } 
}
