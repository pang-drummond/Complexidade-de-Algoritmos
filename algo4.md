% Complexidade de Algoritmos
% Paulino Ng
% 2020-04-03

## Plano da aula

Esta aula apresenta a análise assintótica de alguns algoritmos simples.

1. Análise do algoritmo de impressão recursiva dos valores de uma lista encadeada.
2. Busca em um vetor aleatório
3. Busca em um vetor ordenado
4. Divisão e conquista: soluções recursivas. Equações de recorrência
5. Teorema Mestre para funções recursivas

## Exercício discursivo ENADE-2017

Listas lineares armazenam uma coleção de elementos. A seguir, é apresentada a declaração de uma lista simplesmente encadeada.
```C
struct ListaEncadeada {
  int dado;
  struct ListaEncadeada *proximo;
};
```
<!-- -* -->
Para imprimir os seus elementos da cauda para a cabeça \(do final para o início\) de forma eficiente, um algoritmo pode ser escrito da seguinte forma:
```C
void mostrar(struct ListaEncadeada *lista) {
  if (lista != NULL) {
    mostrar(lista->proximo);
    printf("%d ", lista->dado);
  }
}
```

##

Com base no algoritmo apresentado, faça o que se pede nos itens a seguir:

a) Apresente a classe de complexidade do algoritmo, usando a notação $\Theta$.
b) Considerando que já existe implementada uma estrutura de dados do tipo pilha de inteiros - com as operações de empilhar, desempilhar e verificar pilha vazia - reescreva o algoritmo de forma não recursiva, mantendo a mesma complexidade. Seu algoritmo pode ser escrito em português estruturado ou em alguma linguagem de programação, como C, Java ou Pascal.

## Solução

1. O algoritmo percorre a lista recursivamente, passando por cada nó uma única vez, logo, o algoritmo é: $\Theta(n)$
2. O "programa" para fazer o que é solicitado, faz um laço onde se desempilha um item, imprime, empilha numa pilha auxiliar. Estas operações são realizadas enquanto a pilha não estiver vazia. Após esvaziar a pilha original, deve-se fazer um novo laço para reempilhar os itens na pilha original.

## Teorema mestre para funções recursivas

Sejam $a\geq 1$ e $b>1$ constantes, $f(n)$ uma função assintoticamente positiva e $T(n)$ uma medida de complexidade definida sobre os inteiros. A solução da equação de recorrência:

$T(n)=aT(\frac{n}{b}+f(n))$,

para n uma potência de b é:

1. $T(n)= \Theta(n^{\log_ba})$, se $f(n)=\mathcal{O}(n^{\log_ba-\epsilon})$ para alguma constante $\epsilon>0$;
2. $T(n)= \Theta(n^{\log_ba}\,\log n)$, se $f(n)=\Theta(n^{\log_ba})$; e
3. $T(n)= \Theta(f(n))$, se $f(n)=\Omega(n^{\log_ba+\epsilon})$para alguma constante $\epsilon>0$, e se $a\,f(\frac{b}{b})\leq cf(n)$ para alguma constante $c<1$ e todo $n$ a partir de um valor suficientemente grande.

##

- A equação de recorrência diz que o problema foi dividido em $a$ subproblemas de tamanho $\frac{n}{b}$ cada um.
- Os problemas são resolvidos recursivamente em tempo $T(\frac{n}{b})$ cada um.
- A função $f(n)$ descreve o custo de dividir o problema em subproblemas e combinar os resultados de cada subproblema.
