#include <stdio.h>
#include "movies.h"
#include<string.h>

int main(void);

int main(void) {
    int i, m;

    printf("Podaj maksymalna długość tytułu > ");
    (void)scanf("%d", &m);
    printf("\n");
    for (i = 0; i <= MaxMoviesNo; i++)
    {
        if((strlen(Movies[i].Title)<=m) && (strlen(Movies[i].Title)>0))
        {
            printf("%s, %s, %d.\n", Movies[i].Title, Movies[i].Director, Movies[i].Year);
        }
    }
    return 0;
}