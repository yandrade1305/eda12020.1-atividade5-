#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
}celula;
void remove_depois (celula *p){
   celula *lixo;
   lixo = p->prox;
   p->prox = lixo->prox;
   free (lixo);
}
int remove_depois (celula *p){
   celula *lixo;
   if(p->prox == NULL)
       return NULL;
   lixo = p->prox;
   int dado = lixo->dado;
   p->prox = lixo->prox;
   free (lixo);
        return dado;
}
void remove_elemento (celula *le, int x){
   celula *p, *q;
   p = le;
   q = le->prox;
   while (q != NULL && q->dado != x) {
      p = q;
      q = q->prox;
   }
   if (q != NULL) {
      p->prox = q->prox;
      free (q);
   }
}
void remove_todos_elementos (celula *le, int x){
        celula *ptr, *lixo;
        ptr = le;
        while(ptr->prox != NULL){
            if(ptr->prox->dado == x){
              if(ptr->prox->prox != NULL){
                lixo = ptr->prox;
                ptr->prox = lixo->prox;
                free (lixo);   
              }
              else{
                lixo = ptr->prox;
                ptr->prox = NULL;
                free (lixo);
                break;
              }
            }
            ptr = ptr->prox;
        }
}
