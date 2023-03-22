#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int main()
{
  char str[MAX_SIZE];
  int i, j, len;

  printf("Digite uma string: ");
  fgets(str, MAX_SIZE, stdin);

  // Calculando o comprimento da string
  for (len = 0; str[len] != '\0'; len++)
    ;

  // Invertendo os caracteres da string
  for (i = 0, j = len - 1; i < j; i++, j--)
  {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }
  printf("String invertida: %s", str);
  return 0;
}