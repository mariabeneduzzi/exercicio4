#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int mmc(int a, int b) {
    return (a * b) / mdc(a, b);
}

int main() {
    int num1, num2;

    printf("Digite dois números inteiros positivos: ");
    scanf("%d %d", &num1 &num2);


    if (num1 <= 0 || num2 <= 0) {
        printf("Numeros invalidos.\n");
        return 1;
    }

    int mdc_result = mdc(num1, num2);
    int mmc_result = mmc(num1, num2);


    printf("O MCD entre %d e %d é %d.\n", num1, num2, mdc_result);
    printf("O MMC entre %d e %d é %d.\n", num1, num2, mmc_result);

    return 0;
}
