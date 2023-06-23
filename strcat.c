#include <stdio.h>
#include <string.h>

int main()
{
  char q1[50] = "Universidade";
  char q2[20] = "Federal";
  char q3[20] = "de";
  char q4[20] = "Itajuba";

  strcat(q1, " ");
  strcat(q1, q2);
  strcat(q1, " ");
  strcat(q1, q3);
  strcat(q1, " ");
  strcat(q1, q4);

  printf("%s", q1);
  
  return 0;
}