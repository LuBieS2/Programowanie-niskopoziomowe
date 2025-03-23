#include <stdio.h>

int main(void);

int main(void) {
	int a, b, x;

	printf("Podaj wspolczynniki a, b rownania liniowego >");
	(void)scanf("%d, %d", &a, &b);
	x = -b / a;
	printf("Rozwiazaniem (pierwiastkiem) rownania jest liczba: %d\n", x);
	return 0;
}