# include  < iostream >;
usando el  espacio de nombres  est�ndar ;

anular  agregar ( int );
anular  eliminar ();
int  mostrar ();

struct  NODO {
    int dato;
    NODO * siguiente;
}; NODO * cola = NULL ;

int  main () {
    int opcion, rep = 1 , add, num;
    while (rep == 1 ) {
        cout << " \ n \ t MENU \ n 1. Agregar un elemento a la cola " << endl;
        cout << " 2. Visualizar el frente de la cola \ n 3. Eliminar un elemento de la cola " << endl;
        cout << " Elige: " ; cin >> opcion;
        interruptor (opci�n) {
       caso  1 :
           cout << " ingresar el n�mero que desea agregar: " ; cin >> agregar;
           para contactar (ADD);
           romper ;
       caso  2 :
           num = visualizar ();
           si (num! = - 1 )
           cout << " El frente de la cola es: " << num;
           m�s
           cout << " El frente de la cola esta vacio " << endl;
           romper ;
       caso  3 :
           cout << " Se esta eliminando el frente de la cola " << endl;
           eliminar ();
           romper ;
       por defecto :
           cout << "� Desea repetir el proceso? SI = 1 / NO = 0 " ; cin >> rep;
        }}
    devuelve  0 ;
}
vac�o  para contactar ( int add) {
    if (cola == NULL ) {
        cola = nuevo  NODO ();
        cola-> dato = agregar;
        cola-> siguiente = NULL ;
    } m�s {
        NODO * aux = cola;
        while (aux-> siguiente ! = NULL ) {
            aux = aux-> siguiente ;
        }
        aux-> siguiente = new  NODO ();
        aux = aux-> siguiente ;
        aux-> dato = agregar;
        aux-> siguiente = NULL ;
    }
}

void  eliminar () {
    if (cola == NULL ) devuelve ;
    NODO * aux = cola;
    cola = cola-> siguiente ;
    eliminar aux;
}

int  mostrar () {
    if (cola! = NULL ) {
        volver cola-> dato ;
    } return - 1 ;
}
