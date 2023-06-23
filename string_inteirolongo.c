#include <stdio.h>
int main(){
  char str[10] = "13";
  long long int num;

  sscanf(str,  "%lld", &num);
  printf("%lld \n", num);

  return 0;
}