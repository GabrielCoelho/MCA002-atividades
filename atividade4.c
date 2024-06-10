// Copyright 2024 Gabriel Coelho Soares
/*Integrantes:
 * Gabriel Coelho Soares
 * Gabriel Vinholi
 * Gustavo Poletini
 * Marcos Moreira
 * Thaíto Gabriel Batalini
 * */

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
        res = (pow(a, (k + 1)) / (k + 1)) - (pow(b, (k + 1)) / (k + 1));
        printf("\nIntegral(%lf, %lf) x^%lf dx = %.4lf\n\n", a, b, k, res);
      }
      break;
    case 2:
    case 3:
      printf("Entrou no 2 e/ou no 3\n");
      break;
    default:
      printf("Digite uma opção válida!\n\n");
      break;
  }
  return 0;
}
