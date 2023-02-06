#include <iostream>
#include <vector>
#include <list>

using namespace std;

list<double> listaLinear;
list<double>::iterator k;

int main()
{
    //Inserir valores na lista
    listaLinear.push_back(7);
    listaLinear.push_back(1);
    listaLinear.push_back(13);
    listaLinear.push_back(27);
    listaLinear.push_back(-6);
    listaLinear.push_back(-9);

    //Imprimir conteúdo da lista
    cout << "LISTA COM ITERADOR: ";
    for(k = listaLinear.begin(); k != listaLinear.end(); k++){
        cout << *k << " ";
    }

    //Ordenar valores
    listaLinear.sort();

    //Imprimir o conteúdo da lista
    cout << endl << "ORDENADO: ";

    for(k = listaLinear.begin(); k != listaLinear.end(); k++){
        cout << *k << " ";
    }

    return 0;
}
