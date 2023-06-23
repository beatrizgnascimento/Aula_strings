#include <stdio.h>
int main(){
  char frase[30];
  int i, cont = 0;

  scanf("%[^\n]", frase);

  i = 0;

  while(frase[i] != '\0')
  {
    if(isspace(frase[i]) ) //espaços
    {
      cont++;
    }
    i++;
  }

  printf("%d\n", cont);
}