#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int casas_rainha = 8;
    int casas_bispo = 5;
    int casas_torre = 5;
    int loop; // Criei a variavel loop para evitar criar mais de uma variavel com letras e fui subscrevendo de acordo com o que eu precisava

    printf(" ----Movimentação da rainha---- \n");
    // Dentro do for subscrevi o valor de loop para 1 dentro do for assim o 0 não conta.
    for (loop = 1; loop <= casas_rainha; loop++)
    {
        printf("A rainha andou %i casas para a ESQUERDA\n", loop);
    }

    printf(" ----Movimentação do bispo---- \n");
    // Segui subscrevendo o valor de loop de acordo com o que precisava.
    loop = 0;
    do
    {
        loop++;
        printf("O bispo andou %i casas para CIMA a DIREITA\n", loop);
    } while (loop < casas_bispo);

    printf(" ----Movimentação da torre---- \n");
    // Segui subscrevendo o valor de loop de acordo com o que precisava.
    loop = 1;
    while (loop <= casas_torre)
    {
        printf("A torre andou %i casas para FRENTE\n", loop);
        loop++;
    }

    return 0;
}
