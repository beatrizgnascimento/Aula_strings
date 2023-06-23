#include <stdio.h>
#include <string.h>
int main()
{
  //strlen: mostra o tamanho da string
  char a[50] = "UNIFEI";
  int tam, i;

  for(i = 0; i < strlen(a); i++)
  {
    printf("%c", a[i]);
  }
  printf("\n");


  //tam = strlen(a);
  //printf("%d\n", tam);
  //nao confundir tamanho com posicao
  return 0;
}