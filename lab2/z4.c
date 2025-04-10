#include <stdio.h>
#include "movies.h"
#include<string.h>

int main(void);

int main(void) {
    int i, index;
    int min=Movies[0].Year;
    for (i = 0; i <= MaxMoviesNo; i++)
    {
        if (Movies[i].Year<min && Movies[i].Year>0){
            min=Movies[i].Year;
            index=i;
        }
    }
    printf("%s, %s, %d.\n", Movies[index].Title, Movies[index].Director, Movies[index].Year);
    return 0;
}