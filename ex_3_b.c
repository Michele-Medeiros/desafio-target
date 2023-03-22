// A lógica é multiplicar por 2 o número anterior. Portanto, o próximo elemento é 128 ( 2, 4, 8, 16, 32, 64, 128).

// No caso de criarmos a sequência a partir de uma entrada do usuário teríamos:
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n = 0;
  int num, i;
  printf("digite um número ");
  scanf("%d", &num);
  n = num;
  printf("[%d]", n);
  for (i = 0; i < 6; i++)
  {
    num = num * 2;
    printf("[%d]", num);
  }
  return 0;
}

// No caso de criarmos a sequência a partir do número 64 que seria o próximo a ser elevado na sequência

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n = 64;
  printf("Sequência: 2, 4, 8, 16, 32, 64, ");
  n = n * 2;
  printf("%d\n", n);
  return 0;
} */