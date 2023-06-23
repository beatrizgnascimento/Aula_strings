#include <stdio.h>
#include <ctype.h>

int main()
{
  char c = 'A', d = 'a';
  char s[20] = "Unifei";
  int i;

  printf("%d\n", isupper(d) ); //0 é falso em c e tudo diferente de 0 é verdadeiro

  i = 0;
  while( s[i] != '\0') //colocamos esse while pois nao sabemos o tamanho da string
  {
    s[i] = toupper( s[i]);
    i++;
  }

  printf("%s\n", s);

  return 0;
}