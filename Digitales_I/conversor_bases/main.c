#include <stdio.h>
#include <stdlib.h>

#include "conversor_bases.h"

int main()
{
    int i;
    char num_leido[80];
    char num_binario[80];
    int leido_base;

    conv_a_binario(num_leido, leido_base, num_binario);


    printf("Introduzca la base\n");
    //
    return 0;
}
