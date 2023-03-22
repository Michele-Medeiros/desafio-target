// A lógica é elevar ao quadrado o índice (posição) do número na sequência. Portanto, o próximo elemento é 49. Resposta: 0, 1, 4, 9, 16, 25, 36, 49.

#include <stdio.h>
#include <stdlib.h>

// No caso de criamos a sequencia a partir de uma entrada do usuário teríamos:

int main()
{

  int num, i;
  printf("digite um número ");
  scanf("%d", &num);
  for (i = 0; i <= 7; i++)
  {
    num = i * i;
    printf("[%d]", num);
  }
  return 0;
}

// No caso de completarmos a sequência a partir do índice 7
/*int main()
{
  int n = 7;
  printf("Sequência: 0, 1, 4, 9, 16, 25, 36, ");
  n = n * n;
  printf("%d\n", n);
  return 0;
}*/