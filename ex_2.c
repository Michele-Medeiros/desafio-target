#include <stdio.h>

int main()
{
  int num, primeiro = 0, segundo = 1, proximo = 0, x = 0;

  printf("Digite um número inteiro positivo: ");
  scanf("%d", &num);

  if (num == 0 || num == 1)
  {
    printf("O número %d pertence à sequência de Fibonacci.", num);
  }
  else
  {
    while (proximo <= num)
    {
      if (num == proximo)
      {
        printf("O número %d pertence à sequência de Fibonacci.", num);
        x = 1;
        break;
      }
      proximo = primeiro + segundo;
      primeiro = segundo;
      segundo = proximo;
    }
    if (!x)
    {
      printf("O número %d não pertence à sequência de Fibonacci.", num);
    }
  }
  return 0;
}
