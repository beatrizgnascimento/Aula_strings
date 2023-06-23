#include <stdio.h>
#include <stdlib.h> 

int main()
{
  char a[20] = "123", b[30];
  int x;
  float y = 3.14;

  x = atoi(a); //sscanf(a, "%d", &x);

  printf("%d", x + 1);

  sprintf(b, "%f", y);

  printf(" %s \n", b);
  
  return 0;
}