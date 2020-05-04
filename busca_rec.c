#include <stdio.h>

int busca_rec(int *vi, int ini, int fim, int val) {
  if (ini == fim) return (vi[ini] == val) ? ini : -1;
  int meio = (fim + ini)/2;
  if (vi[meio] == val) return meio;
  if (meio == ini) {
    if (vi[fim] == val) return fim;
    else return -1;
  }
  if (val > vi[meio]) return busca_rec(vi, meio, fim, val);
  else return busca_rec(vi, ini, meio, val);
}

int main() {
  int vi[]={1,3};
  int v2[]={1};
  printf("found 3 in %d\n", busca_rec(vi, 0, 1, 3));
  printf("found -1 in %d\n", busca_rec(vi, 0, 1, -1));
  printf("found 2 in %d\n", busca_rec(vi, 0, 1, 2));
  printf("found 4 in %d\n", busca_rec(vi, 0, 1, 4));
  printf("Found 1 in %d\n", busca_rec(v2, 0, 0, 1));
  printf("Found 0 in %d\n", busca_rec(v2, 0, 0, 0));
  return 0;
}
