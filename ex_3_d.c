// A lógica é elevar ao quadrado os números pares começando por 2, em ordem crescente. Portanto, o próximo elemento é 100. 4, 16, 36, 64, 100

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, n, i, x;

  do
  {
    // ENTRADA
    printf("digite o número 2: ");
    scanf("%d", &num);

    // TRATAMENTO
    if (num != 2)
    {
      printf("erro \n");
      continue;
    }

    // PROCESSAMENTO

    if (num % 2 == 0)
    {
      n = num;
      n = n * n;
      printf("[%d]", n);

      for (i = 0; i < 4; i++)
      {
        num = num + 2;
        x = num * num;
        printf("[%d]", x);
      }
    }
  } while (num != 10);
  return 0;
}

// No caso de criamos a sequencia a partir do número 10 que seria o próximo a ser elevado na sequência

/*int main()
{
  int n = 10;
  printf("Sequência: 4, 16, 36, 64, ");
  if (n % 2 == 0)
  {
    n = n * n;
  }
  else
  {
    printf("erro");
  }
  printf("%d\n", n);
  return 0;
}*/
