// Copyright 2024 Gabriel Coelho Soares
/*Integrantes:
 * Gabriel Coelho Soares
 * Gabriel Vinholi
 * Gustavo Poletini
 * Marcos Moreira
 * Thaíto Gabriel Batalini
 * */

#define euler 2.71828183
#include <math.h>
#include <stdio.h>
#include <unistd.h>

int calcula_integral(int operation);

int main() {
  int op = 0;
  while (op != 4) {
    printf(
        "Escolha uma opção para calcular a integral = "
        "\\int(a,b)f(x)dx:\n\t1.f(x) = x^k\n\t2.f(x) = 1/x\n\t3.f(x) = "
        "cos(x)\n\t4. SAIR\n\n Digite: ");
    scanf("%d", &op);
    if (op != 4) {
      op = calcula_integral(op);
      sleep(2);
    }
  }
  return 0;
}

int calcula_integral(int operation) {
  double a, b, k, res;

  switch (operation) {
    case 1:
      printf("Digite o valor de k: ");
      scanf("%lf", &k);
      printf("Digite o valor de a: ");
      scanf("%lf", &a);
      printf("Dgite o valor de b: ");
      scanf("%lf", &b);
      if (k == -1) {
        printf("Não é possível calcular => k = -1\n\n");
        return 0;
      }
      {
        res = (pow(b, (k + 1)) / (k + 1)) - (pow(a, (k + 1)) / (k + 1));
        printf("\nIntegral(%lf, %lf) x^%lf dx = %.4lf\n\n", a, b, k, res);
      }
      break;
    case 2:
    case 3:
      printf("Digite o valor de a: ");
      scanf("%lf", &a);
      printf("Digite o valor de b: ");
      scanf("%lf", &b);
      if (operation == 2) {
        res = log(b) - log(a);
        printf("\nIntegral(%lf, %lf) 1/x dx = %.4lf\n\n", a, b, res);
      } else {
        res = sin(b) - sin(a);
        printf("\nIntegral(%lf, %lf) cos(x) dx = %.4lf\n\n", a, b, res);
      }
      break;
    default:
      printf("Digite uma opção válida!\n\n");
      break;
  }
  return 0;
}

/* @TODO: Devolutiva do professor
 * Integral de 1/x é ln do módulo de x e assim podemos ter a e b negativos.
 * O caso 2 não pode ter um intervalo que englobe zero.
 * Para k=-1, no caso 1 a regra cai para o caso 2.
 */
