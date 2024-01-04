#include "stdafx.h"
#include "ListaDoble.h"
#include "NodoDoble.cpp"

ListaDoble::ListaDoble(){
	m_objPrior= NULL;
	Dim= 0;
}
ListaDoble::~ListaDoble(){
	delete m_objPrior;
	
}
void ListaDoble::Alta(string p){
	NodoDoble *objNew = new NodoDoble(p);
	Dim++;
	objNew->setNext(m_objPrior);
	// continue
	objNew->setPrior(nullptr);
	m_objPrior=objNew;
	if(m_objPrior != NULL){
		m_objPrior->setPrior(objNew);
		m_objPrior=objNew;
	}
}
string  ListaDoble::Baja(){
	NodoDoble *lv_objActualNode= m_objPrior;
	// copy clone 
	string lv_Result =0;
	if (lv_objActualNode != NULL){
		lv_Result = lv_objActualNode->getValue();
		m_objPrior = lv_objActualNode->getNext();
	}
	delete lv_objActualNode;
		
		return lv_Result;
}
string ListaDoble::toString(){
	stringstream lv_strlist;
	lv_strlist <<"Estructura de la lista Doble:"<<endl<<"--------------------"<<endl;
	NodoDoble *objActual=m_objPrior;
	while (objActual !=NULL){
		lv_strlist <<objActual->getValue()<<"---";
		objActual= objActual->getNext();
	}
	return lv_strlist.str();
}
string ListaDoble::Buscar(string pX){
	NodoDoble *objLast = m_objPrior;
	string lv_int_retorno = NULL;
	bool bln_esta = false;
	while (objLast != NULL){
		bln_esta= (pX == objLast->getValue());
		if(bln_esta){
			break;
		}
		objLast = objLast->getNext();
		
	}// end loop
	if(bln_esta)lv_int_retorno=pX;
	return lv_int_retorno;
}
