void insere_inicio (celula *le, int x){
   celula *nova;
   nova = malloc (sizeof (celula));
   nova->dado = x;
   nova->prox = le->prox;
   le->prox = nova;
}
void insere_antes (celula *le,int x, int y)
{
   celula *p, *q, *nova;
   nova = malloc (sizeof (celula));
   nova->dado = x;
   p = le;
   q = le->prox;
   while (q != NULL && q->dado != y) {
      p = q;
      q = q->prox;
   }
   nova->prox = q;
   p->prox = nova;
}
