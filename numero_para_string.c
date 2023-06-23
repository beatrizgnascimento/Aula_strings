#include <stdio.h>
int main(){
  int num = 151;
  char str[10];

  sprintf(str, "%d", num); //transforma o numero 151 em uma string

  printf("%s \n", str);
  return 0;
}