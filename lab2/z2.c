#include <stdio.h>
#include "movies.h"
#include <string.h>

int main(void);

int main(void) {
    int i, n;
    char m[MaxStrLen];
    printf("Rezyser > ");
    scanf("%[^\n]s", &m);
    printf("Rok produkcji > ");
    scanf("%d", &n);
    printf("\n");
    for (i = 0; i <= MaxMoviesNo; i++)
        if ((strcmp(Movies[i].Director, m)==0) && (Movies[i].Year==n))
        { 
            printf("%s, %s, %d.\n", Movies[i].Title, Movies[i].Director, Movies[i].Year);
        }
    return 0;
}