#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int a;
    float n1, n2, n3, r;

    while (true) {
        printf("Escolha uma das Areas:\n\n");
        printf("[0] - Sair\n");
        printf("[1] - Triangulo\n");
        printf("[2] - Circulo\n");
        printf("[3] - Quadrado\n");
        printf("[4] - Retangulo\n");

        printf("\nEscolha a opcao desejada: ");
        scanf("%d", &a);

        if (a == 0) {
            printf("==========FIM DO PROGRAMA==========\n");
            break;
        }

        system("cls");

        switch (a) {
            case 1:
                printf("Digite a Base do triangulo: ");
                scanf("%f", &n1);

                printf("Digite a Altura do triangulo: ");
                scanf("%f", &n2);

                r = (n1 * n2) / 2;
                printf("\nA area do triangulo eh: %.1f\n", r);
                break;

            case 2:
                printf("Digite o raio do circulo: ");
                scanf("%f", &n1);

                r = 3.14 * (n1 * n1);
                printf("A area do circulo eh: %.1f\n", r);
                break;

            case 3:
                printf("Digite um dos lados do quadrado: ");
                scanf("%f", &n1);

                r = n1 * n1;
                printf("\nA area do quadrado eh: %.1f\n", r);
                break;

            case 4:
                printf("Digite a Base do retangulo: ");
                scanf("%f", &n1);

                printf("Digite a Altura do retangulo: ");
                scanf("%f", &n2);

                r = n1 * n2;
                printf("\nA area do retangulo eh: %.1f\n", r);
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
    }

    system("pause");
    return 0;
}
