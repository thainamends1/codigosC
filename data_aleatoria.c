#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarDataAleatoria(int *dia, int *mes, int *ano);

int main()
{
    int dia, mes, ano;

    gerarDataAleatoria(&dia, &mes, &ano);

    return(0);
}

void gerarDataAleatoria(int *dia, int *mes, int *ano)
{
    srand(time(NULL));

    *dia = 1 + (rand() % 30);
    *mes = 1 + (rand() % 12);
    *ano = 1900 + (rand() % 122);

    if(*mes == 4 || *mes == 6 || *mes == 9 || *mes == 11)
        *dia = *dia - 1;

    if(*mes == 2)
        *dia = 1 + (rand() % 28);

    printf("Data gerada: %d / %d / %d", *dia, *mes, *ano);
    printf("\n");
}
