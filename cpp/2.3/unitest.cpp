#include "ListaDoble.cpp"
#include "stdafx.h"
#include <string>

using namespace std;
ListaDoble list;

 int menu(){
	 
	 int op;
	 cout<<"1.Alta\n2.Baja\n3.Buscar\n";
	 cin>>op;
	 
	 return op;
 }

	 void MetodoAlta(){
		 
		 int vE;
		 string valor;
		 cout<<"Favor ingresar valor de entrada: ";
		 cin>>vE;
		 cin.ignore();
		 for(int i=0; i<vE; i++){
			 cout<<"Datos "<<i+1<<": ";
			 getline(cin,valor);
			 //list.Alta(valor);
		 }
		// cout<<list.toString();
	 }
