#include <stdio.h>
#include <stdlib.h>

typedef struct Elem *ElemRef;
typedef struct Elem {
   int val;
   ElemRef next;
} Elem;

int main(void);

int main(void) {
   int i, n, rm;
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

   printf("Wprowadz element do usuniecia: ");
   scanf("%d", &rm);

   printf("\nLista wejsciowa: ");
   while (e) {
      printf("%d ", e->val);
      e = e->next;
   }
   e=b;

   p=NULL;
   while(e){
      if (e->val==rm)
      {
         if (p==NULL){
            b=e->next;
            free(e);
            e=b;
         }
         else{
            p->next=e->next;
            free(e);
            e=p;
         }
      }
      p=e;
      e=e->next;
   }

   printf("\n\nLista po usunieciu: ");
   e=b;
   while (e) {
      printf("%d ", e->val);
      b = e;
      e = e->next;
      free(b);
   }
   return 0;
}
