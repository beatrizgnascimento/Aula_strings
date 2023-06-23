#include <stdio.h>
int main(){
  char frase[40];
  int i;

  scanf("%[^\n]", frase);

  i = 0;

  while(frase[i] != '\0')
  {
    if(frase[i] != 'a' && frase[i] != 'e' && frase[i] != 'i' && frase[i] != 'o' && frase[i] != 'u'){
      printf("%c", frase[i]); //imprimir caracter por caracter com %c e %s imprime a string inteira
    }
    i++;
  }
    
  printf("\n");

  return 0;
}