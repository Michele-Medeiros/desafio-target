#include <stdio.h>
#include <stdlib.h>

/*O carro e o caminhão quando se cruzam estão à mesma distância de Ribeirão Preto ( 60,9 km da cidade), pois para eles terem se cruzado significa que ambos se encontram em um mesmo ponto do percurso porém em sentidos opostos. Segue abaixo o programa que determina o local de cruzamento: */

int main()
{
  double v1 = 110;                           // velocidade do carro em km/h
  double v2 = 70.6;                          // velocidade média em km/h do caminhão considerando o tempo de pedagio
  double t_pedagio = 10.0 / 60.0;            // tempo de cada pedágio em horas
  double ts_carro = 100.0 / 110.0;           // tempo de viagem sem obstáculos para o carro em horas
  double ts_caminhao = ts_carro + t_pedagio; // tempo de viagem sem obstáculos para o caminhão em horas
  double x1 = 0.0;                           // posição do carro em km
  double x2 = 100.0;                         // posição inicial do caminhão em km
  double t = 0.0;                            // tempo em horas
  double x = 0.0;                            // posição de cruzamento em km

  // calcula a posição de cruzamento
  t = x1 / v1;
  t = x2 / (v2 * t_pedagio);
  x1 = v1 * t;
  x2 = 100 - v2 * t;
  x = (v1 * 100) / (v1 + v2);

  // exibe a posição de cruzamento
  printf("A distancia da cidade de Ribeirão Preto em que o carro e o caminhão se cruzam é = %.1f km.\n", x);
  printf("Portanto, quando se cruzam, ambos estão à mesma distância de Ribeirão.\n");

  return 0;
}