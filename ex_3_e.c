// A lógica é somar os dois números anteriores na sequência para obter o próximo. Portanto, o próximo elemento é 13. Resposta: 1, 1, 2, 3, 5, 8, 13.

#include <stdio.h>
#include <stdlib.h>

// No caso de criamos a sequencia a partir de uma entrada do usuário teríamos:
int main()
{
  int n1, n2, n3, i, count;
  printf("Digite o tamanho da sequência que deseja: \n");
  scanf("%d", &count);

  printf("digite um número \n");
  scanf("%d", &n1);

  printf("digite mais um número \n");
  scanf("%d", &n2);

  printf("Sequência: %d, %d, ", n1, n2);

  for (i = 2; i < count; i++)
  {
    n3 = n1 + n2;
    printf("%d, ", n3);
    n1 = n2;
    n2 = n3;
  }
  return 0;
}
// No caso de completarmos a sequência através da soma dos números 5 e 8
/*int main()
{
  int penultimo = 5;
  int ultimo = 8;
  int n;
  printf("Sequência: 1, 1, 2, 3, 5, 8, ");
  n = ultimo + penultimo;
  printf("%d\n", n);
  return 0;
}*/
