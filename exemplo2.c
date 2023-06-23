#include <stdio.h>
int main(int argc, char *argv[] ) /*
argc: c (count) qte de argumentos
 argv: v (values) valores dos args
 ./saida 7 + 2
*/ 
{
  int x, y;
  char c;

  sscanf(argv[1], "%d", &x);  //operacao
  c = argv[2][0]; //simbolo
  sscanf(argv[3], "%d", &y); //operacao

  switch(c)
  {
    case '+':
      printf("%d\n", x + y);
      break;
    case '-':
      printf("%d\n", x - y);
      break;
    case 'X':
      printf("%d\n", x * y);
      break;
  }

  return 0;
}