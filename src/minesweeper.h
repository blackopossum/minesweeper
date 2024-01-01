#ifndef SEMESTERAUFGABE_MINESWEEPER_H
#define SEMESTERAUFGABE_MINESWEEPER_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NICHT_AUFGEDECKT -1
#define BOMBE -2
#define FLAGGE -3
#define MAX_BOMBE 8
#define LeeresFeld "██"

void iniFrontend(int **frontend, int width, int height);
void iniBackend(int **backend, int **frontend, int width, int height);
int **allocateField(int width, int height);

#endif
