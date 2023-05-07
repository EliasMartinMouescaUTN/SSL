#include <stdio.h>

// Funcion útil, no pedida.
int ipow(int b, unsigned int e);

// a) Calcular y retornar la longitud de una cadena dada.
int strLength(const char str[])
{
    int i = 0;
    
    while (str[i] != '\0') i++;

    return i;
}

// b) Convertir una cadena de dígitos en su equivalente numérico.
int strToInt(const char str[])
{
    int i = 0;
    int number = 0;

    while (str[i] != '\0')
    {
        if (!(str[i] > 47 && str[i] < 58)) return -1;
        else { number += ipow(10, i) * (str[strLength(str) - i - 1] - '0'); }

        i++;
    }

    return number;
}

// c) Convertir una cadena de caracteres a la misma cadena con todos sus caracteres en mayúscula.
void toUpper(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] > 96 && str[i] < 123) str[i] -= 32;
        i++;
    }

    return;
}

// d) Eliminar de una cadena dada todas las ocurrencias de un carácter dado.






// Definición de las funciones no pedidas.
int ipow(int b, unsigned int e)
{
    int result = 1;

    for (int i = 0; i < e; i++) result *= b;

    return result;
}
