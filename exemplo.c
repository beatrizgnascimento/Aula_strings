#include <stdio.h>
int main()
{
  char a[30], b[30];
  int x, y;

  scanf(" %s %s", a, b);

  sscanf(a, "%d", &x); //string a virou x (int)
  sscanf(b, "%d", &y);

  printf("%d", x + y);
  

  return 0;
}