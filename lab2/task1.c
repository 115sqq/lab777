#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double ***pointer = NULL;

    pointer = malloc(sizeof(double **));
    *pointer = malloc(sizeof(double *));
    **pointer = malloc(sizeof(double));

    ***pointer = 2.0;
    printf("%f\n", ***pointer);

    free(**pointer);
    free(*pointer);
    free(pointer);

    return 0;
}