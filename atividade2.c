/*Copyright Gabriel Vinholi e Thaito Batalini 2024 */
/* Nome dos Integrantes
 * Gabriel Coelho Soares
 * Gabriel Vinholi
 * Gustavo Poletini
 * Marcos Moreira Martins
 * Thaito Gabriel Batalini
 */

#include <math.h>
#include <stdio.h>

/** Verifica se o multiplicador da incógnita quadrática da função é positivo
 * Imprime o sentido da concavidade
 */
void check_concavidade(int a) {
  if (a > 0) {
    printf("Parábola concava para cima\n");
  } else {
    printf("Parábola concava para baixo\n");
  }
}

/* Encontra o zero real da função
 * Retorna os valores em que o gráfico da função corta o eixo x
 */
void zero_real(int a, int b, int c) {
  double delta, raiz1, raiz2;
  delta = pow(b, 2) - 4 * a * c;
  raiz1 = (-(b) + sqrt(delta)) / 2 * a;
  raiz2 = (-(b)-sqrt(delta)) / 2 * a;
  if (delta == 0) {
    printf("Delta é zero, portanto a parábola tangencia o eixo x em %.4lf\n",
           raiz1);
  } else if (delta < 0) {
    printf(
        "Não há zero real pois não existe raiz real (delta é negativo), o "
        "gráfico não cruza o eixo x\n");
  } else {
    printf("O gráfico corta o eixo x em %.4lf e %.4lf", raiz1, raiz2);
  }
}

/* Encontra as coordenadas do ponto de vértice da parábola nos eixos X e Y
 */
void val_vertice(int a, int b, int c) {
  double delta, xVert, yVert;
  delta = pow(b, 2) - 4 * a * c;
  xVert = (-(b) / 2 * a);
  yVert = (-(delta) / 4 * a);
  printf(
      "As coordenadas do ponto de vértice da parábola no eixo X é %.4lf e no "
      "eixo Y é %.4lf",
      xVert, yVert);
}

int main() {
  int a = 3, b = 16, c = 22;
  printf(
      "Dada a f(x)=(%d)x^2 + (%d)x + (%d), verifique o sentido da concavidade, "
      "o zero real e os valores do vértice\n",
      a, b, c);
  check_concavidade(a);
  zero_real(a, b, c);
  val_vertice(a, b, c);
  return 0;
}

/* @TODO: Devolutiva do professor
 * Não faltaram parênteses nos denominadores das raízes e das coordenadas do
 * vértice. Xvertice não está retornando os valores corretos
 */
