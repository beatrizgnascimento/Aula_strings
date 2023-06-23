#include <stdio.h>
int main(){
  char frase[30];

  scanf(" %3[^\n]", frase); //3 caracteres colocar um espaço no scanf semrpe

  printf("palavra digitada: %s \n", frase);
}