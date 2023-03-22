
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, n1 = 0, n2 = 1, n3, pertence = 0;

  printf("Informe um número: ");
  scanf("%d", &num);

  printf("Sequência de Fibonacci: ");

  while (n1 <= num)
  {
    printf("%d ", n1);
    if (n1 == num)
    {
      pertence = 1;
    }
    n3 = n1 + n2;
    n1 = n2;
    n2 = n3;
  }

  if (pertence)
  {
    printf("\n%d pertence à sequência de Fibonacci.\n", num);
  }
  else
  {
    printf("\n%d não pertence à sequência de Fibonacci.\n", num);
  }

  return 0;
}