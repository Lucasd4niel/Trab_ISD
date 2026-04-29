#include <stdio.h>
#include "lib.h"

#define TAM 8
#define OP 2

int main()
{
    int binario;                               /*variavel BINARIO armazena o binario por inteiro*/
    int bin1[TAM], bin2[TAM], bin3[TAM];          /*cada bin[] segmenta cada bit do octeto gerado por BINARIO*/
    int op1_bin[TAM], op2_bin[TAM]; /*auxiliar pra nao perder o vetor principal quando complementar por refencia*/
    char op1, op2;                                /*uma para cada operação, nao pode ser vetor senao vira string*/
    scanf("%d", &binario);
    while (binario != -1)
    {
        vetora_binario(bin1, TAM, binario);
        scanf(" %c", &op1);
        scanf("%d", &binario);
        vetora_binario(bin2, TAM, binario);
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
        scanf("%d", &binario);
        vetora_binario(bin3, TAM, binario);
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
        printf("\n");
        /*começa a printar*/
        print_bin(bin1, TAM);
        printf("%c\n", op1);
        print_bin(bin2, TAM);
        printf("%c\n", op2);
        print_bin(bin3, TAM);
        printf("=\n");
        print_bin(op2_bin, TAM);
        printf("\n");
        scanf("%d", &binario);
    }
    return 0;
}