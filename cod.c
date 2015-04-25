#include <stdio.h>

unsigned int x;
char in;

void input(void);
void run(char c);


int main (int argc, char *argv[]){
  x = 0;
  if(argc != 2){
    input();
  }else{
    FILE *file = fopen(argv[1], "r");
    while((in = fgetc(file)) != EOF){
      run(in);
    }
    fclose(file);
  }
  return 0;
}

void input(void){
  if(in != 10){
    printf("\n>> "); /* Bash-like input */
  }
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
	  break;
    case 'd':
      x--;
	  break;
    case 'o': case 'c':
      printf("%c", x);
	  break;
    case 's': case 'k':
      x = x*x;
	  break;
    default:
	  break;
  }
}
