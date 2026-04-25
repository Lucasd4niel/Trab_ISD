#include <stdio.h>
#include "lib.h"

#define TAM 8
#define OP 2

int main() {
    int i, binario; /*variavel BINARIO armazena o binario por inteiro*/
    int bin1[TAM], bin2[TAM], bin3[TAM]; /*cada bin[] segmenta cada bit do octeto gerado por BINARIO*/
    int aux_bin[TAM]; /*auxiliar pra nao perder o vetor principal quando complementar por refencia*/
    char op1, op2; /*uma para cada operação, nao pode ser vetor senao vira string*/
    scanf("%d", &binario);
    if (binario == -1)
    {
    /*encerra o programa*/
        return 1;
    }  
    vetora_binario(bin1, TAM, binario);
    for (i = 0; i < TAM; i++)
    {
        printf("%d", bin1[i]);
    }
    if(verifica_bin_negativo(bin1, TAM) == 0)
    {
        /*para positivo só imprime*/
        printf("b (%di)\n", converte_decimal(bin1, TAM));
    }
    else
    {
        /*para negativo copia o vetor pra nao perder o primario*/
        copia_para_aux(bin1, aux_bin, TAM);
        descomplementa2(aux_bin, TAM);
        printf("b (%di)\n", converte_decimal(bin1, TAM));
    }

    scanf(" %c", &op1);
    printf(" %c", op1);
    vetora_binario(bin1, TAM, binario);
    scanf(" %c", &op2);
    printf(" %c", op2);
    vetora_binario(bin1, TAM, binario);
    return 0;
}