#include <stdio.h>
int main(){
  char str[10] = "3.14515";
  float pi;

  sscanf(str, "%f", &pi);
  printf("%f", pi);
  return 0;
}