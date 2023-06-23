#include <stdio.h>
int main(){
  char str[10] = "12"; //string vira numero
  int num;

  sscanf(str, "%d", &num); // usa sscanf para ler o numero digitado pelo usuario
  printf("%d \n", num);
  return 0;
}