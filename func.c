#include <stdio.h>
#include "lib.h"

void vetora_binario (int bin[], int tam, int binario)
{
    int i;
    for (i = tam - 1; i >= 0 ; i--)
    {
        bin[i] = binario % 10;
        binario = binario / 10;
    }
}

int converte_decimal (int bin[], int tam)
{
    int decimal = 0;
    int i;
    for (i = 0; i < tam; i++)
    {
        decimal = decimal * 2 + bin[i];
    }
    return decimal;
}

void complementa1 (int bin[], int tam)
{
    int i = 0;
    for (i = 0; i < tam; i++)
    {
        if (bin[i] == 0)
        {
            bin[i] = 1;
        }
        else
        {
            bin[i] = 0;
        }
    }
}

void descomplementa2 (int bin[], int tam)
{
    int i;
    
}

int verifica_bin_negativo (int bin[], int tam)
{
    if (bin[0] == 1)
    {
        return 1; /*negativo*/
    }
    return 0; /*positivo*/
}

void coipia_para_aux (int bin_primario[], int bin_auxiliar[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        bin_auxiliar[i] = bin_primario[i];
    }
}