#ifndef LIB_H
#define LIB_H

void vetora_binario (int bin[], int tam, int binario);
void complementa1 (int bin[], int tam);
void descomplementa2 (int bin[], int tam);
void copia_para_aux (int bin_primario[], int bin_auxiliar[], int tam);

int converte_decimal (int bin[], int tam);
int verifica_bin_negativo (int bin[], int tam);

#endif