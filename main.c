/* ============================================================================

    Linguagem C

    Autor: Thiago Dutra
    Data:

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* ========================================================================= */
/* --- Funções Auxiliares --- */
void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

/* ========================================================================= */
/* --- Funções Utilizadas --- */
float calcular_total_entregas(int qtdEntregas) {
    int i;
    float valorRecebido, soma = 0;

    printf("Informe os valores de cada entrega\n");
    for(i = 0; i < qtdEntregas; i++) {
        printf("Entrega %d: ", i + 1);
        scanf("%f", &valorRecebido);
        limpar_entrada();
        soma += valorRecebido;
    }
    return soma;
}


/* ========================================================================= */
/* --- Função Principal --- */
main()
{
    printf("CALCULO DE ENTREGAS DIARIO\n\n");

    int qtdEntregas = 0;
    float valorTotal = 0,
          totalUber = 0, totalIfood = 0, totalLalamove = 0, totalBorzo = 0, total99 = 0;

    printf("Quantas entregas da Uber voce fez neste dia?: ");
    scanf("%d", &qtdEntregas);
    totalUber = calcular_total_entregas(qtdEntregas);
    printf("Total ganho na Uber: %.2f\n", totalUber);

    printf("\nQuantas entregas da 99 voce fez neste dia?: ");
    scanf("%d", &qtdEntregas);
    total99 = calcular_total_entregas(qtdEntregas);
    printf("Total ganho na 99: %.2f\n", total99);

    printf("\nQuantas entregas da Lalamove voce fez neste dia?: ");
    scanf("%d", &qtdEntregas);
    totalLalamove = calcular_total_entregas(qtdEntregas);
    printf("Total ganho na Lalamove: %.2f\n", totalLalamove);

    printf("\nQuantas entregas do Ifood voce fez neste dia?: ");
    scanf("%d", &qtdEntregas);
    totalIfood = calcular_total_entregas(qtdEntregas);
    printf("Total ganho no Ifood: %.2f\n", totalIfood);

    valorTotal = totalUber + totalIfood + totalLalamove + totalBorzo + total99;
    printf("\nTotal do dia: R$ %.2f\n", valorTotal);

    return 0;
}


/* ============================================================================

                                       _
                                      / \
                                     |oo >
                                     _\=/_
                    ___         #   /  _  \   #
                   /<> \         \\//|/.\|\\//
                 _|_____|_        \/  \_/  \/
                | | === | |          |\ /|
                |_|  0  |_|          \_ _/
                 ||  0  ||           | | |
                 ||__*__||           | | |
                |* \___/ *|          []|[]
                /=\ /=\ /=\          | | |
________________[_]_[_]_[_]_________/_]_[_\_______________________________


============================================================================ */

