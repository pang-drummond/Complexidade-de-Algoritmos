#include <stdio.h>
#include <stdlib.h>

struct no_ {
  int dado;
  struct no_* proximo;
};
typedef struct no_ No;

No *lista = NULL;

void insere(int i) {
  No* novo = (No*) malloc(sizeof(No));
  novo->dado = i;
  novo->proximo = NULL;
  if (lista == NULL) {
    lista = novo;
    return;
  }
  No* copia = lista;
  while (copia->proximo != NULL) copia = copia->proximo;
  copia->proximo = novo;
  return;
}

void imprime(No* list) {
  if (list != NULL) {
    printf("%d ", list->dado);
    imprime(list->proximo);
//    printf("%d ", list->dado);
  }
}

int main() {
  insere(10);
  imprime(lista);
  printf("\n");
  insere(42);
  imprime(lista);
  printf("\n");
  insere(333);
  imprime(lista);
  printf("\n");
  return 0;
}
