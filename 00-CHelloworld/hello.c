#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * archivo;
    archivo = fopen ("output.txt", "w");
    fprintf(archivo, "Hola Mundo");

    return 0;
}