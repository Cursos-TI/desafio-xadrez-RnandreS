#include <stdio.h>
/*
Em minhas pesquisar encontrei as VARIAVEIS GLOBAIS, queria resolver o problema com a recursividade.
Ná saida de dados eu queria contar a quantidade de passos como eu já havia feito no trabalho anterior de forma crescente.
e não seria possivel utilizando a variavel movimento pos eu drecremento ela.
*/
int acumula_movimento;

void movimentoRainha(int movimento) {
    if (movimento > 0) {
        acumula_movimento ++;
        printf("A rainha andou %i casas para a ESQUERDA\n", acumula_movimento);
        movimentoRainha(movimento - 1);
    }
    acumula_movimento = 0; // zero a variavel para ser utilizada  novamente.
}


void movimentoTorre(int movimento){
    if (movimento > 0) {
        acumula_movimento++;
        printf("A torre andou %i casas para DIREITA\n", acumula_movimento); 
        movimentoTorre(movimento - 1);
    }
    acumula_movimento = 0; // zero a variavel para ser utilizada  novamente.
}


void movimentoCavalo(int movimento_frente, int movimento_lado)
{
    for (int i = 0; i < movimento_lado; i++)
    {
        for(int i = 0; i < movimento_frente; i++)
        {
            acumula_movimento++;
            printf("O cavalo andou %d casas para CIMA\n",acumula_movimento);
        }
        acumula_movimento = movimento_lado; // subscrevi a variavel para o valor lado se não ela ia aparecer 2 casas como no movimento para cima
        printf("O cavalo andou %d casas para a DIREITA\n",acumula_movimento);
    }
    acumula_movimento = 0; // zeroo a variavel para ser utilizada novamente;
}

void movimentoBispo(int movimento)
{
    if (movimento > 0)
    {
        acumula_movimento++;
        do
        {
            do
            {
                // movimento na horizontal interno
                printf("O bispo andou %d na HORIZONTAL \n", acumula_movimento);
            } while (movimento == 0);
            // movimento na vertical externo
            printf("O bispo andou %d na VERTICAL \n", acumula_movimento);
        } while (movimento == 0);
        movimentoBispo(movimento - 1);
        /* code */
    }
    acumula_movimento = 0;// zera a variavel para ser utilizada novamente;
}

int main(){
    int casas_rainha = 8;
    int casas_bispo = 5;
    int casas_torre = 5;
    int casas_reto_cavalo = 2;         
    int casas_lado_cavalo = 1;    
    
    printf(" ----Movimentação da rainha---- \n");
    movimentoRainha(casas_rainha);

    printf(" ----Movimentação do bispo---- \n");
    movimentoBispo(casas_bispo);

    printf(" ----Movimentação da torre---- \n");
    movimentoTorre(casas_torre);

    printf(" ----Movimentação da torre---- \n");
    movimentoCavalo(casas_reto_cavalo,casas_lado_cavalo);

    return 0;
}