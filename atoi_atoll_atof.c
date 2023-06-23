#include <stdio.h>
#include <stdlib.h> // para usar atoi atoll e atof
int main(){
  char str[10] = "123.45";
  
  int numI = atoi(str); //tranforma 123.45 em inteiro
  long long int numL = atoll(str); //transforma 123.45 em inteiro longo
  double numD = atof(str); //trabnsforma a string em double

  printf("%d \n%lld \n%lf \n", numI, numL, numD);

  return 0;
}