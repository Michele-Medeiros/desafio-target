#include <stdio.h>

int main()
{
  float distancia = 100;
  float velocidade_carro = 110;
  float velocidade_caminhao = 80;
  float distancia_percorrida_carro;
  float distancia_percorrida_caminhao;
  float tempo_pedagio_caminhao = 5.0 / 60.0;

  // Calculando as distâncias percorridas pelo carro e pelo caminhão até se encontrarem
  distancia_percorrida_carro = (velocidade_carro / (velocidade_carro + velocidade_caminhao)) * distancia;
  distancia_percorrida_caminhao = distancia - distancia_percorrida_carro;

  // Adicionando o tempo adicional do caminhão em cada pedágio à distância percorrida pelo caminhão
  distancia_percorrida_caminhao += 2.0 * velocidade_caminhao * tempo_pedagio_caminhao;

  // Verificando qual veículo está mais próximo de Ribeirão Preto quando eles se cruzarem
  if (distancia_percorrida_carro < distancia_percorrida_caminhao)
  {
    printf("O carro estará mais próximo de Ribeirão Preto quando eles se cruzarem.\n");
  }
  else
  {
    printf("O caminhão estará mais próximo de Ribeirão Preto quando eles se cruzarem.\n");
  }
  return 0;
}
