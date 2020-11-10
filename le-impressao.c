void imprime (celula *le) {
   celula *p;
   for (p = le->prox; p != NULL; p = p->prox)
      printf ("%d -> ", p->dado);
    printf("NULL\n");
}
void imprime_rec(celula *le){
    if(le->prox != NULL){
        printf ("%d -> ", le->prox->dado);
        imprime_rec(le->prox);
    }
    else
        printf("NULL\n");
}
