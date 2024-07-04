/*Copyright Marcos Moreira Martins 2024 */
/* Integrantes
 * Gabriel Coelho Soares
 * Gabriel Vinholi
 * Gustavo Poletini
 * Marcos Moreira Martins
 * Thaito Gabriel Batalini
 */

#include <math.h>
#include <stdio.h>

void func1() {
  float x = 0, k = 0;
  printf("Digite um valor para X: ");
  scanf("%f", &x);
  printf("Digite um valor para K: ");
  scanf("%f", &k);
  if ((x == 0 && k <= 1) || (x <= 0 && (k - trunc(k) != 0))) {
    printf("\tx=%.4f está fora do domínio para f' de f(x)=x^k, quando k = %.4f",
           x, k);
  } else {
    printf("\tf'(%.4f) = %.4f", x, (k * pow(x, (k - 1))));
  }
}

void func2() {
  float x = 0;
  printf("Digite um valor para X: ");
  scanf("%f", &x);
  if (x == 0) {
    printf("\tErro, divisão por 0. Volte para o menu\n\n ");
  } else {
    printf("\tf'(%.4f) = %.4f", x, (1 / x));
  }
}

void func3() {
  float x = 0;
  printf("Digite um valor para X, angulo em radianos: ");
  scanf("%f", &x);
  printf("\tf'(%.4f) = %.4f radianos", x, (cos(x)));
}

int main() {
  int menu = 0;
  do {
    printf(
        "\nSelecione a Função que deseja "
        "derivar:\n1.f(x)=x^4\t\t2.f(x)=ln(x)\t\t3.f(x)=sen(x)\t\t4.Sair\n");
    scanf("%d", &menu);
    printf("\n");
    switch (menu) {
      case 1:
        func1();
        break;
      case 2:
        func2();
        break;
      case 3:
        func3();
        break;
      case 4:
        break;
      default:
        printf("Opção não encontrada");
        break;
    }
  } while (menu != 4);
  return 0;
}
