#include <iostream>
using namespace std;

void agregar(int );
void eliminar();
int visualizar();

struct NODO{
    int dato;
    NODO*siguiente;
}; NODO*cola=NULL;

int main(){
    int opcion, rep=1, add, num;
    while (rep==1){
        cout<<"\n\t M E N U\n1. Agregar un elemento a la cola"<<endl;
        cout<<"2. Visualizar el frente de la cola\n3. Eliminar un elemento de la cola"<<endl;
        cout<<"Elige: "; cin>>opcion;
        switch(opcion){
       case 1:
           cout<<"Introduzca el numero que desea agregar: "; cin>>add;
           agregar(add);
           break;
       case 2:
           num=visualizar();
           if(num!=-1)
           cout<<"El frente de la cola es: "<<num;
           else
           cout<<"El frente de la cola esta vacio"<<endl;
           break;
       case 3:
           cout<<"Se esta eliminando la frente de la cola "<<endl;
           eliminar();
           break;
       default:
           cout<<"Desea repetir el proceso? SI=1/NO=0 "; cin>>rep;
        }}
    return 0;
}
void agregar(int add){
    if (cola==NULL){
        cola=new NODO();
        cola->dato=add;
        cola->siguiente=NULL;
    }else{
        NODO *aux=cola;
        while(aux->siguiente!=NULL){
            aux=aux->siguiente;
        }
        aux->siguiente=new NODO();
        aux=aux->siguiente;
        aux->dato=add;
        aux->siguiente=NULL;
    }
}

void eliminar(){
    if (cola==NULL) return;
    NODO*aux=cola;
    cola=cola->siguiente;
    delete aux;
}

int visualizar(){
    if (cola!=NULL){
        return cola->dato;
    }return -1;
}
