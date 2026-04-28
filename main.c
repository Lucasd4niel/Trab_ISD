#include <stdio.h>
#include "lib.h"

#define TAM 8
#define OP 2

int main()
{
    int i, binario;                               /*variavel BINARIO armazena o binario por inteiro*/
    int bin1[TAM], bin2[TAM], bin3[TAM];          /*cada bin[] segmenta cada bit do octeto gerado por BINARIO*/
    int aux_bin[TAM], op1_bin[TAM], op2_bin[TAM]; /*auxiliar pra nao perder o vetor principal quando complementar por refencia*/
    char op1, op2;                                /*uma para cada operação, nao pode ser vetor senao vira string*/
    scanf("%d", &binario);
    while (binario != -1)
    {
        vetora_binario(bin1, TAM, binario);

        for (i = 0; i < TAM; i++)
        {
            printf("%d", bin1[i]);
        }

        if (verifica_bin_negativo(bin1, TAM) == 0)
        {
            printf("b (%di ", converte_decimal(bin1, TAM));
            converte_hexadecimal(bin1, TAM);
            printf("h)\n");
        }
        else
        {
            descomplementa2(bin1, aux_bin, TAM);
            complementa1(aux_bin, TAM);
            printf("b (-%di ", converte_decimal(aux_bin, TAM));
            converte_hexadecimal(bin1, TAM);
            printf("h)\n");
        }
        scanf(" %c", &op1);
        printf("%c\n", op1);
        scanf("%d", &binario);
        vetora_binario(bin2, TAM, binario);
        for (i = 0; i < TAM; i++)
        {
            printf("%d", bin2[i]);
        }
        if (verifica_bin_negativo(bin2, TAM) == 0)
        {
            printf("b (%di ", converte_decimal(bin2, TAM));
            converte_hexadecimal(bin2, TAM);
            printf("h)\n");
        }
        else
        {
            descomplementa2(bin2, aux_bin, TAM);
            complementa1(aux_bin, TAM);
            printf("b (-%di, ", converte_decimal(aux_bin, TAM));
            converte_hexadecimal(bin2, TAM);
            printf("h)\n");
        }
        switch (op1)
        {
        case '+':
            soma(bin1, bin2, op1_bin, TAM);
            break;
        case '-':
            subtrai(bin1, bin2, op1_bin, TAM);
            break;
        default:
            break;
        }
        scanf(" %c", &op2);
        printf("%c\n", op2);
        scanf("%d", &binario);
        vetora_binario(bin3, TAM, binario);
        for (i = 0; i < TAM; i++)
        {
            printf("%d", bin3[i]);
        }
        if (verifica_bin_negativo(bin3, TAM) == 0)
        {
            printf("b (%di ", converte_decimal(bin3, TAM));
            converte_hexadecimal(bin3, TAM);
            printf("h)\n");
        }
        else
        {
            descomplementa2(bin3, aux_bin, TAM);
            complementa1(aux_bin, TAM);
            printf("b (-%di, ", converte_decimal(aux_bin, TAM));
            converte_hexadecimal(bin3, TAM);
            printf("h)\n");
        }
        switch (op2)
        {
        case '+':
            soma(op1_bin, bin3, op2_bin, TAM);
            break;
        case '-':
            subtrai(op1_bin, bin3, op2_bin, TAM);
            break;
        default:
            break;
        }
        printf("=\n");
        for (i = 0; i < TAM; i++)
        {
            printf("%d", op2_bin[i]);
        }
        if (verifica_bin_negativo(op2_bin, TAM) == 0)
        {
            printf("b (%di ", converte_decimal(op2_bin, TAM));
            converte_hexadecimal(op2_bin, TAM);
            printf("h)\n");
        }
        else
        {
            descomplementa2(op2_bin, aux_bin, TAM);
            complementa1(aux_bin, TAM);
            printf("b (-%di, ", converte_decimal(aux_bin, TAM));
            converte_hexadecimal(op2_bin, TAM);
            printf("h)\n");
        }
        scanf("%d", &binario);
    }
    return 0;
}