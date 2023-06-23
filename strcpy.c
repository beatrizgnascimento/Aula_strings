#include <stdio.h>
#include <string.h>
int main()
{
  //strcpy copia uma string dentro da outra
  char t1[30] = "Unifei";
  char t2[30];

  //t2 = t1 nao funciona
  //usar strcpy(destino, origem)

  strcpy(t2, t1);
  printf("%s\n", t2);

}