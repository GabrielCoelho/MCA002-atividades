/* Copyright Gabriel Vinholi e Thaito Batalini 2024 */
/* Integrantes:
 * Gabriel Coelho Soares
 * Gabriel Vinholi
 * Gustavo Poletini
 * Marcos Moreira Martins
 * Thaito Gabriel Batalini
 */

#include <math.h>
#include <stdio.h>

int main(void) {
  float angulo = 181;  //*** Entre com o Valor do ângulo em graus***
  float seno, cosseno, tangente, confere;
  int graus;

  graus = angulo;

  angulo = (angulo * M_PI) / 180;

  seno = sin(angulo);
  cosseno = cos(angulo);
  tangente = tan(angulo);

  /* A SOMA DAS POTÊNCIAS DE SENO E COSSENO TEM QUES SER 1
   * não precisa conferir
   * confere = pow(seno,2) + pow(cosseno,2);
   */
  if (angulo < 0) {
    printf("***ERRO*** ângulo deve ser maior que 0!!!");
  } else {
    printf("Seno(%d) = %.4f\nCosseno(%d)=%.4f\n", graus,
           fabs(seno) < 1e-6 ? 0.0 : seno, graus,
           fabs(cosseno) < 1e-6 ? 0.0 : cosseno);
    if (graus == 90 || graus == 270) {
      printf("Tangente não existe!!!");
    } else {
      printf("Tangente(%d) = %.4f", graus,
             fabs(tangente) < 1e-6 ? 0.0 : tangente);
    }
  }

  return 0;
}
