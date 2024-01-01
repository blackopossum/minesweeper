#include "solve_algorithm.h"
#include "print_utils.h"
#include "minesweeper.h"

/*
 * Die Funktion gibt 1 zurück, wenn das übergebene Feld lösbar ist ohne raten zu müssen sonst 0.
 */
int algorithm(int **frontend, int **backend, int width, int height)
{
    int i = 0, j = 0;
    int **Erreichbar = allocateField(width, height);
    for (i = 0; i < width; ++i) {
        for (j = 0; j < height; ++j) {
            if(frontend[i][j] == BOMBE){
                break;
            }
        }
    }


}