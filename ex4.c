#include <stdio.h>
int main(){
  char frase1[20], frase2[20];
  int i;

  printf("Digite a frase: ");

  scanf("%[^\n]", frase1);
  i = 0;
  while(frase1[i] != '\0')
  {
    frase2[i] = frase1[i];
    i++;
  }

  frase2[i] = '\0';

  printf("Copia: %s\n", frase2);
}