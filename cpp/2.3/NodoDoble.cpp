#include "stdafx.h"
#include "NodoDoble.h"
NodoDoble::NodoDoble(string p_newValor)
{
	nv_int_Value = p_newValor;
	m_objNext = NULL;
	m_objPrior = NULL;
	
}
void NodoDoble:: setNext(NodoDoble *p_newNext){
	m_objNext = p_newNext;
}
void NodoDoble::setPrior(NodoDoble *p_newprior){
	m_objPrior = p_newprior;
}
//destructor
NodoDoble::~NodoDoble(){
	/* delete m_objNext; Kill the 
	cadet Tad...*/
}
string NodoDoble::getValue(){
	return nv_int_Value;
}
NodoDoble* NodoDoble::getNext(){
	return m_objNext;
}
NodoDoble* NodoDoble::getPrior(){
	return m_objPrior;
}
