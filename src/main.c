#include "minesweeper.h"
#include "print_utils.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int **frontend;
int **backend;
int height = 5;
int width = 5;

int main(void /*int argc, char **argv*/)
{
    srand(time(NULL));
    frontend = allocateField(width, height);
    backend = allocateField(width, height);
    iniFrontend(frontend ,width, height);
    iniBackend(backend, frontend, width, height);
    printDebug(frontend, backend, width, height);
}
