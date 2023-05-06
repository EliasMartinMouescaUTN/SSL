#include <stdio.h>

// Funcion útil, no pedida.
int ipow(int b, unsigned int e);

int strLength(const char str[])
{
    int i = 0;
    
    while (str[i] != '\0') i++;

    return i;
}

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







// Definición de las funciones no pedidas.
int ipow(int b, unsigned int e)
{
    int result = 1;

    for (int i = 0; i < e; i++) result *= b;

    return result;
}
