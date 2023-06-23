#include <stdio.h>
#include <string.h>
int main(){
  char c[20] = "azul", d[20] = "azul", e[20] = "verde";

  if( strcmp(c,d) == 0) printf("c e d iguais \n");
  else printf("c e d diferentes \n");

  if( strcmp(c,e) == 0) printf("c e e iguais \n");
  else printf("c e e diferentes \n");
  return 0;
}