#include <stdio.h>
#include <stdlib.h>

typedef struct celulaLista{
   int informacao;
   struct celulaLista *proximo;
}celula;

int main(){
   // Declarações
      celula *pLista;
   // Funções
      void initLista(celula **pRecebido);
      void insertLista(celula **pRecebido);
      void buscaListaSimples(celula **pRecebido);
   // Instruções
      pLista = (celula *)malloc(sizeof(struct celulaLista));
      initLista(&pLista);
      insertLista(&pLista);
      buscaListaSimples(&pLista);
      free(pLista);
 }
/*
   Inicialização da Lista Encadeada
*/
void initLista(celula **pRecebido){
   (*pRecebido)->proximo = NULL;
}

/*
   Função para Inserção no Início
*/
void insertLista(celula **pRecebido){
   // Declarações
      celula *temporario;
      int valor = 0;
   // Instruções
      while(valor != -1){
      scanf("%d", &valor);
      temporario = (celula *)malloc(sizeof(celula));
      temporario->informacao = valor;
      temporario->proximo = (*pRecebido)->proximo;
      (*pRecebido)->proximo = temporario;
  }
}
/*
   Função para Percorrer Elementos
*/
void buscaListaSimples(celula **pRecebido){
   // Declarações
      celula *temporario;
      int num;
   // Instruções
      scanf("%d", &num);
      if((*pRecebido)->proximo == NULL){
         printf("Lista Vazia\n");
      }
      else{
         temporario = (celula *)malloc(sizeof(celula));
         temporario = (*pRecebido)->proximo;
         for (int i = 0; i < num; i++) {
         temporario = temporario->proximo;
         }
      printf("%d\n", temporario->informacao);
      }
}
