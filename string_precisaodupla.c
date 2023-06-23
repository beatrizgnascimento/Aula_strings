#include <stdio.h>
int main(){
  char str[10] = "2.74837";
  double e;

  sscanf(str, "%lf", &e);
  printf("%lf \n", e);
  return 0;
}