#include <stdio.h>
#include <stdlib.h>

typedef struct Elem *ElemRef;
typedef struct Elem {
   int val;
   ElemRef next;
} Elem;

int main(void);

int main(void) {
   int i, n, v;
   struct Elem* b = NULL, * p = NULL, *e;

   printf("Podaj dlugosc listy > ");
   (void)scanf("%d", &n);
   for (i = 0; i < n; i++) {
      e = (struct Elem*)malloc(sizeof(Elem));
      if (e) {
         printf("Wprowadz element > ");
         (void)scanf("%d", &e->val);
         e->next = NULL;
         if (p)
            p->next = e;
         else
            b = e;
         p = e;
      }
   }
   e = b;   
   printf("\nLista wejsciowa: ");
   while (e) {
      printf("%d ", e->val);
      e = e->next;
   }
   p = (struct Elem*)malloc(sizeof(Elem));
   p->val = v;
   struct Elem *prev = NULL, *current = b, *next = NULL;
   while (current != NULL) {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
   }
   b=prev;
   e = b;
   printf("\n\nLista odwrocona: ");
   while (e) {
      printf("%d ", e->val);
      b = e;
      e = e->next;
      free(b);
   }
   return 0;
}
