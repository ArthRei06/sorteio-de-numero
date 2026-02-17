#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    float precos[5] = {5.0, 7.0, 10.0, 3.0, 3.0};
    int opcao = 0;
    float soma = 0; 
    float media = 0;
    char sair[10] = "";

    while(opcao != 3) {
        printf("\n--- SISTEMA DE PRECOS ---\n");
        printf("1. Inventario\n");
        printf("2. Media de Precos\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nInventario de Precos:\n");
                for(int i = 0; i < 5; i++) {
                    // DICA: i + 1 para mostrar "Produto 1" em vez de "Produto 0"
                    printf("Produto %d: R$ %.2f\n", i + 1, precos[i]);
                }
                break;

            case 2: {
                soma = 0; // RESET importante: limpa a soma antes de começar
                for(int i = 0; i < 5; i++) {
                    soma += precos[i];
                }
                media = soma / 5;
                printf("\nA media de precos e: R$ %.2f\n", media);
                break;
            }

            case 3: {
                // RESET da string: garante que o loop entre mesmo se 
                // o usuario ja tiver tentado sair antes
                strcpy(sair, ""); 

                while(strcmp(sair, "SAIR") != 0) {
                    printf("\nPara confirmar, digite SAIR: ");
                    scanf("%s", sair);

                    if(strcmp(sair, "SAIR") == 0) {
                        printf("Encerrando o sistema...\n");
                    } else {
                        printf("Palavra incorreta! Tente novamente.\n");
                    }
                }
                break; // Sai do case 3
            }

            default:
                if(opcao != 3) { // Evita mostrar "Invalida" ao sair corretamente
                    printf("\nOpcao invalida! Tente 1, 2 ou 3.\n");
                }
                break;
        }
    }

    return 0;
}