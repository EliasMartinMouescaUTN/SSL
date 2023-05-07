#include "functions.h"
#include <stdio.h>

int main()
{
    char str[64] = "AaaaNNNckajsoaaAaAaoooAa";

    printf("%i", strToInt(str));

    strRemove(str, 'a');
    printf("%s\n", str);

    return 0;
}
