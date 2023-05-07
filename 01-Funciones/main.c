#include "functions.h"
#include <stdio.h>

int main()
{
    char str[64] = "Elicapo";

    printf("%i", strToInt(str));

    strCat(str, ", el mejor.");
    printf("%s\n", str);

    return 0;
}
