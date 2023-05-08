#include <stdio.h>
#include <string.h>
#include "functions.h"

int main()
{
    char sampleString[32] = "Programacion";
    char numberString[] = "8093";

    printf("Prueba a: ");
    if (strLength(sampleString) == 12) printf("OK.");
    else printf("ERROR.");

    printf("\nPrueba b: ");
    if (strToInt(numberString) == 8093) printf("OK.");
    else printf("ERROR.");

    printf("\nPrueba c: ");
    toUpper(sampleString);
    if (strcmp(sampleString, "PROGRAMACION") == 0) printf("OK.");
    else printf("ERROR.");

    printf("\nPrueba d: ");
    strcpy(sampleString, "Programacion");
    strRemove(sampleString, 'o');
    if (strcmp(sampleString, "Prgramacin") == 0) printf("OK.");
    else printf("ERROR.");

    printf("\nPrueba e: ");
    strcpy(sampleString, "Programacion");
    strCat(sampleString, " en c!");
    if (strcmp(sampleString, "Programacion en c!") == 0) printf("OK.");
    else printf("ERROR.");

    printf("\nPrueba f: ");
    strcpy(sampleString, "Programacion");
    strInsert(sampleString, '_', 8);
    if (strcmp(sampleString, "Programa_cion") == 0) printf("OK.");
    else printf("ERROR.");

    printf("\n");

    return 0;
}

    
