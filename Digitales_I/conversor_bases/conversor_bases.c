#include "conversor_bases.h"

// funciones

void conv_a_binario(char num_entrada[], int base_entrada, char num_salida[])
{
    div2()
}

binario_a_base()

leer_numero_stdin()

imprimir_numero()

// la funcion div2 recibe: un numero de entrada, un numero de base,
// el resultado de la division, y *retorna* el residuo como un
// caracter '0' o '1'
char div2(char num_entrada[], int base_entrada, char resultado[])
{
    int i,j, longitud, int_cifra;
    char cifra;
    char resultado_parcial[80]

    // trabajar sobre una variable intermedia
    longitud = strlen(num_entrada);
    strcpy(resultado_parcial, num_entrada);

    // bucle principal
    for(i) {
        //
        for(i=longitud ; i>=0 ; i--) {
        cifra = num_entrada[];

        // es cifra decimal?
        if ((cifra <= '9') && (cifra >= '0')) {
            int_cifra = cifra - 48;
        } else if ((cifra <= 'z') && (cifra >= 'a')){
            // es letra minuscula
            int_cifra = cifra - 86;
        } else if ((cifra <= 'Z') && (cifra >= 'A')){
            // es letra mayuscula
            int_cifra = cifra - 54;
        }

        // en int_cifra tengo mi dígito como un numero entero

        //if ((cifra <= 57) && (cifra >= 48))
        tempcifra = num_entrada[] - 0x30;
    }
}
