#include "functions.h"
#include <stdio.h>

int main()
{
    char str[64] = "Elicapo";

    printf("%i", strToInt(str));

    strInsert(str, 'a', 3); 
    printf("%s\n", str);

    return 0;
}
