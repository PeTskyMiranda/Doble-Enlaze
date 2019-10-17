#include <iostream>
using namespace std;

struct nodo{
	int valor;
	nodo* siguiente;
	nodo* antes;
}*primero, *ultimo;

void insertar(){
	nodo* nuevo=new nodo();
	cout<<"Ingresa los datos"<<endl;
	cin>>nuevo->valor;
	if(primero==NULL){
		primero=nuevo;
		primero->siguiente=NULL;
		primero->antes=NULL;
		ultimo=primero;		
	}else{
		ultimo->siguiente=nuevo;
		nuevo->siguiente=NULL;
		nuevo->antes=ultimo;
		ultimo=nuevo;
	}
}
void mostrarlis(){
	nodo* actual=new nodo();
	actual=primero;
	if(primero!=NULL){
		while(actual!=NULL){
			cout<<"\n" <<actual->valor;
			actual=actual->siguiente;
		}
	}else{
		cout<<"La lista no contiene nada"<<endl;
	}	
}
void mostrarlisr(){
	nodo* actual=new nodo();
	actual=ultimo;
	if(primero!=NULL){
		while(actual!=NULL){
			cout<<"\n" <<actual->valor;
			actual=actual->antes;
		}
	}else{
		cout<<"La lista no contiene nada"<<endl;
	}	
}	
	
int main(){
	insertar();
	insertar();
	insertar();
	insertar();
	insertar();
	cout<<"Mostrar datos del Primero al Ultimo: "<<endl;
	mostrarlis();
	cout<<"\n Mostrar datos del Ultimo al Primero: "<<endl;
	mostrarlisr();
	
	
	return 0;	
}



