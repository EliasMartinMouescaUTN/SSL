#include "functions.h"
#include <stdio.h>

int main()
{
    char str[64] = "aaa11AaBjsfJJJJ";

    printf("%i", strToInt(str));

    toUpper(str);
    printf("%s\n", str);

    return 0;
}
