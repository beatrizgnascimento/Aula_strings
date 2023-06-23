#include <stdio.h>
int main(){
  char f[30];
  int i;

  scanf("%[^\n]", f);

  i = 0;

  while(f[i] != '\0')
  {
    if(f[i] == 'a')
    {
      printf("1");
    }
    else if(f[i] == 'e')
    {
      printf("2");
    }
    else if(f[i] == 'i')
    {
      printf("3");
    }
    else if(f[i] == 'o')
    {
      printf("4");
    }
    else if(f[i] == 'u')
    {
      printf("5");
    }
    else
    {
      printf("%c", f[i]);
    }
    i++;
  }

  printf("\n");
}
