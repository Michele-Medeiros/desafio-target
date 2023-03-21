/*A lógica consiste em adicionar 2 unidades ao número anterior, nesse caso ao numeral 7 de modo que a sequencia final seja (1, 3, 5, 7, 9)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n = 7;
  printf("Sequência: 1, 3, 5, 7, ");
  n = n + 2;
  printf("%d\n", n);
  return 0;
}

// No caso de criamos a sequencia a partir de uma entrada do usuário teríamos:

/* #include <stdio.h>
#include <stdlib.h>

int main(){
   int n = 0;
   int num, i;
   printf("digite um número ");
   scanf("%d", &num);
   n = num;
   printf("[%d]",n);
   for( i = 0 ; i < 4; i++) {
      num = num + 2;
      printf("[%d]",num);
    }
   return 0;
  } */
