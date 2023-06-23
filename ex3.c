#include <stdio.h>
int main(){
  char frase[40];
  
  scanf(" %10[^\n]", frase);

  printf("%s", frase);
  return 0;
}