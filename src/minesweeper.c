#include "minesweeper.h"

/*
 * Funktion um das Frontend mit zufälligen Bomben zu initalisieren
 */
void iniFrontend(int **frontend, int width, int height)
{
    int i, j, Zufallszahl;
    for (i = 0; i < width; ++i) {
        for (j = 0; j < height; ++j) {
            Zufallszahl = rand() % 2;
            if(Zufallszahl == 1){
                frontend[i][j] = BOMBE;
            }
            else
            {
                frontend[i][j] = 0;
            }
        }
        printf("\n\n");
    }
}

/*
 * Funktion um das Backend zu initalisieren, sodass jedes Feld eine Mine oder eine natürliche Zahl, die die Anzahl der Nachbarn enthält, die Minen sind
 */
void iniBackend(int **backend, int **frontend, int width, int height)
{
    int count = 0, x, y;

    for (x = 0; x < width; ++x) {
        for (y = 0; y < height; ++y) {
            if(frontend[x][y] == BOMBE){
                backend[x][y] = BOMBE;
            }
            else
            {
                if(x - 1 >= 0){
                    if(frontend[x - 1][y] == BOMBE) count++;
                    if(y -1 >= 0){
                        if(frontend[x - 1][y - 1] == BOMBE) count++;
                    }
                    if(y + 1 < width){
                        if(frontend[x - 1][y + 1] == BOMBE) count++;
                    }
                }
                if(y - 1 >= 0){
                    if(frontend[x][y - 1] == BOMBE) count++;
                    if(x + 1 < height){
                        if(frontend[x + 1][y - 1] == BOMBE) count++;
                    }
                }
                if(y + 1 < width){
                    if(frontend[x][y + 1] == BOMBE) count++;
                    if(x + 1 < height){
                        if(frontend[x + 1][y + 1] == BOMBE) count++;
                    }
                }
                if(x + 1 < height){
                    if(frontend[x + 1][y] == BOMBE) count++;
                }
                backend[x][y] = count;
                count = 0;
            }
        }
    }
}

/*
 * Funktion um Speicher für ein Feld zu reservieren
 */
int **allocateField(int width, int height)
{
    int **field, i, j;
    field = (int **)malloc(height * sizeof(int *));
    if(field == NULL)
    {
        return NULL;
    }
    for(i = 0; i < height; i++)
    {
        field[i] = malloc(width * sizeof(int));
        if(field[i] == NULL)
        {
            for(j = 0; j < i; j++)
            {
                free(field[j]);
            }
            return NULL;
        }
    }
    return field;
}



