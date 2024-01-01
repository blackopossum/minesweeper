#include "print_utils.h"

/*
 * Funktion um den Inhalt eines Feldes als Zahlen auf der Kommandozeile ausgibt
 */
void printfield(int **field, int width, int height)
{
    int i, j;
    for (i = 0; i < width; ++i) {
        for (j = 0; j < height; ++j) {
            printf("%i\t", field[i][j]);
        }
        printf("\n\n");
    }
}

/*
 * Funktion für Debugging Zwecke, die das Frontend und das Backend auf der Kommandozeile ausgibt
 */
void printDebug(int **frontend, int **backend, int width, int height)
{
    int i;
    printfield(frontend, width, height);
    for (i = 0; i < width; ++i) {
        printf("########");
    }
    printf("\n");
    printfield(backend, width, height);
}
