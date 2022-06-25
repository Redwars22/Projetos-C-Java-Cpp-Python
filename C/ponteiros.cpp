#include <iostream>

struct node {
    int data; //data
    struct node *next //next element
};

    struct node *top = NULL;

int main()
{
    //It points to the struct


    return 0;
}

void push(int value){
    struct node *newNode;
    newNode = new(struct node);

    //Insert the new value into the stack
    newNode->data = value;

    //Updates the pointer to match the position of the element that is currently in the top
    newNode->next = top;
    top = newNode;
    cout << "Elemento inserido" << endl;
}

void printStack(){
    struct node *index;
    index = top;

    if(top == NULL){
        cout << "Pilha vazia";
        return;
    }

    while(index != NULL){
        cout <<  index->data << "";
        index = index->next;
    }
}