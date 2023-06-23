#include <stdio.h>
int main(){
  char palavra[30];

  scanf("%[^\n]", palavra);

  printf("palavra digitada: %s \n", palavra);
}