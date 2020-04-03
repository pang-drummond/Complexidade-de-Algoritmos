% Complexidade de Algoritmos
% Paulino Ng
% 2020-03-20

## Plano da aula

Esta aula apresenta as funções típicas de complexidade de algoritmos. Para tanto começamos com uma rápida revisão matemática.

1. Revisão Matemática: Séries
2. Conjuntos
3. Funções

## Revisão matemática: Séries

Somatória de séries finitas. Seja a sequência: ${a_0, a_1, \ldots, a_{n-1}}$:

- Série aritmética: $a_i = a_0 + i . d\longrightarrow \sum\limits_{i=0}^{n-1}a_i = \frac{1}{2}n(a_0+a_{n-1})=\frac{1}{2}(2a_0+(n-1)d)$
  - Exemplos:
    + $1+1+ \ldots+1 = n$
    + $1+2+\ldots+n = \frac{1}{2}n(n+1)$
    + $1+3+\ldots+(2n-1) = n^2$
- Série geométrica: $a_i=a_0r^i\longrightarrow \sum\limits_{i=0}^{n-1}a_i = \frac{a_0(1-r^{n})}{1-r} = \frac{a_0-ra_{n-1}}{1-r}$
  - $a_0 + a_0.r + a_0.r^2 + \ldots = \frac{a}{1-r}\quad \textrm{para} -1\leq r \leq 1$
  - Exemplos:
    + $1+\frac{1}{2}+\frac{1}{4}+\ldots+\frac{1}{2^7}=\frac{1(1-\frac{1}{2^8})}{1-\frac{1}{2}}=1,9921875$
    + $1+\frac{1}{2}+\frac{1}{4}+\ldots = 2$

## Séries importantes

* $1-\frac{1}{2}+\frac{1}{3}-\frac{1}{5}+\ldots=\sum\limits_{i=1}^{\infty}\frac{(-1)^{i-1}}{i}=\ln 2$

* $1^2+2^2+3^2+\ldots+n^2=\sum\limits_{i=1}^{n}i^2=\frac{n(n+1)(2n+1)}{6}$

* $1-\frac{1}{3}+\frac{1}{5}-\frac{1}{7}+\ldots=\sum\limits_{i=1}^{\infty}\frac{(-1)^{i-1}}{2i-1}=\frac{\pi}{4}$

* $e^n=1+n+\frac{n^2}{2!}+\frac{n^3}{3!}+\ldots=\sum\limits_{i=0}^{\infty}\frac{n^i}{i!}$

* $a^n=e^{n\ln a}=1+n\ln a+\frac{(n\ln a)^2}{2!}+\frac{(n\ln a)^3}{3!}+\ldots$

## Conjuntos

* Um **conjunto** é uma coleção de objetos distinguíveis que são chamados de **membros**, ou **elementos** do conjunto.
* Se $x$ é um objeto membro de um conjunto $S$, podemos escrever: $x\in S$.
* Se $x$ não é um objeto membro de um conjunto $S$, podemos escrever: $x\notin S$.
* Dois conjuntos são iguais se ambos têm os mesmos elementos: $\{1,2,3,1\}=\{2,1,3\}=\{1,2,3\}$
* Algumas notações de conjuntos:
  - $\emptyset$ : **conjunto vazio**, conjunto sem nenhum membro
  - $\mathbb{Z}$ : conjunto dos **números inteiros**, $\{\ldots,-1,0,1,\ldots\}$
  - $\mathbb{N}$: conjunto dos **números naturais**, $\{0,1,2,\ldots\}\footnote{Autores mais antigos não consideram 0 como parte dos naturais.}$
  - $\mathbb{R}$: conjunto dos **números reais**.
  - $\mathbb{C}$: conjunto dos **números complexos**.

## Relações entre Conjuntos

* Se todos os elementos de um conjunto $A$ também fazem parte de um conjunto $B$, $A$ é dito ser um **subconjunto** de $B$. Denotado por: $A\subseteq B$  ou $B\supseteq A$.
* Se além de $A$ ser um subconjunto de $B$, $A\not=B$, $A$ é um **subconjunto próprio** de B: $A\subset B$ (A está contido em B), ou $B\supset A$ (B contem A).
  - Propriedades:
    1. $A\subset B \textrm{ e }B\subset C\Rightarrow A\subset C$
    2. $\emptyset$ é subconjunto de qualquer conjunto $A$: $\emptyset\subseteq A$
  - $\mathbb{N}\subset\mathbb{Z}\subset\mathbb{R}\subset\mathbb{C}$

## Operações com Conjuntos

* **Intersecção**: $A\cap B=\{x|x\in A\textrm{ e }x\in B\}$
* **União**: $A\cup B=\{x|x\in A\textrm{ ou }x\in B\}$
* **Diferença**: $A-B=\{x|x\in A\textrm{ e }x\notin B\}$

### Propriedades

  - $A\cap\emptyset=\emptyset$
  - $A\cup\emptyset=A$
  - $A\cap A=A$
  - $A\cup A=A$

## Mais Propriedades

* Comutativa
  - $A\cap B=B\cap A$
  - $A\cup B=B\cup A$
* Associativa
  - $A\cap (B\cap C)=(A\cap B)\cap C=A\cap B\cap C$
  - $A\cup (B\cup C)=(A\cup B)\cup C=A\cup B\cup C$
* Distributiva
  - $A\cap(B\cup C)=(A\cap B)\cup(A\cap C)$
  - $A\cup(B\cap C)=(A\cup B)\cap(A\cup C)$
* Absorção
  - $A\cap(A\cup B)=A$
  - $A\cup(A\cap B)=A$
* Leis de De Morgan
  - $A-(B\cap C)=(A-B)\cup(A-C)$
  - $A-(B\cup C)=(A-B)\cap(A-C)$

## Complemento e Partições

* Seja um conjunto que contem todos os outros (ou pelo menos os de interesse), $U$, chamado de **conjunto universo**, o **complemento de um conjunto** é definido como: $\overline{A}=U-A=\{x|x\in U$ e $x\notin A\}$.
  - $\overline{\overline{A}}=A;\qquad A\cap\overline{A}=\emptyset;\qquad A\cup\overline{A}=U$
  - Leis de De Morgan: $\overline{B\cap C}=\overline{B}\cup\overline{C};\qquad\overline{B\cup C}=\overline{B}\cap\overline{C}$
  - Exemplo: Se $\mathbb{N}^{\*}$ é o conjunto universo e $A=\{x|x\textrm{ é }par\}$, então $B=\{x|x\textrm{ é }impar\}$ é o complemento de $A$
* Dois conjuntos $A$ e $B$ são **disjuntos** se $A\cap B=\emptyset$.
* Uma coleção $\mathcal{S}={S_i}$ de conjuntos não vazios forma uma partição de S se:
  - os conjuntos são disjuntos dois-a-dois, isto é, $S_i, S_j \in\mathcal{S}$ e $i\not= j\Rightarrow S_i\cap S_j=\emptyset$ e
  - a união deles é S, isto é, $S=\bigcup\limits_{S_i\in\mathcal{S}}S_i$.
    - Exemplo: Seja $A=\{a,b,c,d\}$, uma partição de $A$ é $P=\{\{a\},\{b,d\},\{c\}\}$

## Cardinalidade

* O número de elementos de um conjunto é a **cardinalidade** dele, denotada por: $\left| S\right|$.
  - Exemplo: $\left|\{a,\{a\},\{\{a\}\}\}\right|=3$
  - Exemplo: $\left|\emptyset\right|=0$
  - Exemplo: $\left|\mathbb{N}\right|=\infty$
* Georg Cantor foi um dos primeiros matemáticos a "contar" conjuntos infinitos, o conjunto dos naturais, $\mathbb{N}$, tem cardinalidade $\aleph_0$ (alef-0), a mesma dos inteiros(!?). $\mathbb{R}$ têm cardinalidade $\aleph_1$ (alef-1). Quando um conjunto infinito pode ter todos os seus elementos mapeados um-a-um em $\mathbb{N}$, o conjunto é contável. $\mathbb{R}$ é incontável.
* Propriedades
  - Para $A$ e $B$ finitos: $|A\cup B|=|A|+|B|-|A\cup B|\Rightarrow |A\cup B|\leq|A|+|B|$
  - $A\subseteq B\Rightarrow |A|\leq|B|$
  - $|A\cup B|=|A|+|B|\Leftrightarrow A\textrm{ e }B\textrm{ são disjuntos}$.

<!--
* Nomenclatura em inglês: um conjunto com $n$ elementos é chamado de *n-set*. Um conjunto *1-set* é chamado de singleton, conjunto com um elemento. Um subconjunto com $k$ elementos é chamado de *k-subset*.
-->

## Produto Cartesiano (JOIN em SQL)
* O **produto cartesiano** do conjunto $A$ com o conjunto $B$ é o conjunto formado pelos pares ordenados de cada elemento do conjunto $A$ com cada elemento do conjunto $B$: $A\times B=\{(a,b)|a\in A\textrm{ e }b\in B\}$
  - Exemplo: $\{a,b\}\times\{a,b,c\}=\{(a,a),(a,b),(a,c),(b,a),(b,b),(b,c)\}$
  - $|A\times B|=|A|.|B|$
  - Espaço bidimensional, plano: $\mathbb{R}^2=\mathbb{R}\times\mathbb{R}$
  - Espaço tridimensional, 3-D: $\mathbb{R}^3=\mathbb{R}\times\mathbb{R}\times\mathbb{R}$

## Funções
* A seguir vamos listar algumas funções que aparecem na análise de complexidade de algoritmos:
  - $f(n)=c$, onde $c$ é uma constante.
  - $f(n)=n$, função identidade; função linear: $f(n)=an+b$, onde $a$ e $b$ são constantes.
  - $f(n)=n^2$, função quadrado; função quadrática: $f(n)=a_2\,n^2+a_1\,n+a_0$, onde $a_2, a_1$ e $a_0$ são constantes.
  - $f(n)=a_m\,n^m+a_{m-1}\,n^{m-1}+\ldots+a_1\,n+a_0$, função polinomial.
  - $f(n)=\sqrt{n}$, função raiz quadrada.
  - $f(n)=\log n$, função logarítmica na base 10; $\log_e n=\ln n$, logaritmo natural; $\log_2 n=\textrm{lg}\,n$, logaritmo na base 2.
  - $f(n)=a^n=\underbrace{a.a.\ldots. a}_n$, função exponencial.
  - $f(n)=n!=1.2.\ldots.n=\prod\limits_{i=1}^n i$, função fatorial
* Exercício: plote o gráfico destas funções para $n\in[1,10]$

## Análise das Funções

* Estas funções crescem de maneiras diferentes. Na análise de algoritmos, estas funções aparecem como funções de complexidade do algoritmo.
* Uma função de complexidade, em geral, é uma aproximação do comportamento de gastos de um, ou mais, recurso computacional (normalmente o tempo).
* O maior interesse neste tipo de análise é para o que acontece quando o n \(tamanho da entrada\) aumenta.
* Estamos preocupados em saber se conseguiremos resolver um problema de grande tamanho com o algoritmo.
* De maneira geral, a nossa análise não se preocupa com problemas pequenos. Observe que o melhor algoritmo para problemas grandes pode não ser o melhor algoritmo para pequenos problemas. Mas, na solução de um problema grande, podem aparecer pequenos problemas que devem ser resolvidos muitas vezes e em alguns casos pode ser melhor usar o algoritmo *menos bom* para grandes problemas.
* As funções listadas estão em ordem de aumento para grandes valores de $n$. Isto é, para um grande valor de $n$, um aumento dele nas funções debaixo da listagem produzem um aumento maior nas funções.
