#include <stdio.h>
#include <stdlib.h>

typedef struct Elem *ElemRef;
typedef struct Elem {
   int val;
   ElemRef next;
} Elem;

int main(void);

int main(void) {
   int i, n;
   struct Elem* b = NULL, * p = NULL, *e;

   printf("Podaj dlugosc listy 1> ");
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
   int n1;
   struct Elem* b1 = NULL, * p1 = NULL, *e1;

   printf("Podaj dlugosc listy 2> ");
   (void)scanf("%d", &n1);
   for (i = 0; i < n1; i++) {
      e1 = (struct Elem*)malloc(sizeof(Elem));
      if (e1) {
         printf("Wprowadz element > ");
         (void)scanf("%d", &e1->val);
         e1->next = NULL;
         if (p1)
            p1->next = e1;
         else
            b1 = e1;
         p1 = e1;
      }
   }

   e1 = b1;   
   e = b;   

   printf("\nLista 1: ");
   while (e) {
      printf("%d ", e->val);
      e = e->next;
   }
   printf("\n\nLista 2: ");
   while (e1) {
      printf("%d ", e1->val);
      e1 = e1->next;
   }

   e1=b1;
   e=p;

   while(e1){
    e->next=e1;
    e1=e1->next;
    e=e->next;
   }

   e=b;
   printf("\n\nZlaczenie list 1 oraz 2: ");
   while (e) {
      printf("%d ", e->val);
      b = e;
      e = e->next;
      free(b);
   }
   return 0;
}
