#include<iostream>
#include<stdlib.h>

using namespace std;

struct node
{
    int n;
    struct node *prox;
};

struct node *beginStack=NULL;
struct node *endStack=NULL;

void insereFila(int valor)
{
    struct node *aux;
    aux=new(struct node);
    aux->n=valor;
    aux->prox=NULL;
    if(beginStack==NULL)
    {
        beginStack=aux;
        endStack=aux;
    }
    else
    {
        endStack->prox=aux;
        endStack=aux;
    }
}
void filaVazia()
{
    if(beginStack==NULL)
    {
        cout << "Fila vazia!!!";
        return;
    }
}
void removeFila()
{
    filaVazia();
    struct node *aux;
    aux=beginStack;
    beginStack=beginStack->prox;
    delete (aux);

}
void beginStackFila()
{
    filaVazia();
    cout << "" << beginStack->n;
}

void imprimeFila()
{
    filaVazia();
    struct node *aux;
    aux=beginStack;
    while(aux!=NULL)
    {
        cout << "" << aux->n;
        aux=aux->prox;
    }
}

main()
{
    insereFila(50);
    insereFila(64);
    insereFila(88);
    beginStackFila();
    removeFila();
    imprimeFila();
}