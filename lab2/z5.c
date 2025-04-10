#include <stdio.h>
#include "movies_short.h"

int main(void);

int main(void) {
    int i, m;
    for (i = 0; i <= MaxMoviesNo; i++)
        if(Movies[i].Year!=0)
            printf("%s, %s, %d.\n", Movies[i].Title, Movies[i].Director, Movies[i].Year);
    printf("usun film > ");
    scanf("%d", &m);
    for (int i = m; i < MaxMoviesNo - 1; i++) {
        Movies[i] = Movies[i + 1];
    }
    for (i = 0; i <= MaxMoviesNo; i++)
        if(Movies[i].Year!=0)
            printf("%s, %s, %d.\n", Movies[i].Title, Movies[i].Director, Movies[i].Year);
    return 0;
}