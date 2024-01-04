#pragma once 
#include <string >
using namespace std;

class NodoDoble
	{
	private:
	string nv_int_Value;
	NodoDoble *m_objNext;
	NodoDoble *m_objPrior;
	
	public:
		//constructor 
		NodoDoble(string p_newValor);
        ~NodoDoble();
		//setter
		void setNext(NodoDoble *p_newNext);
		void setPrior(NodoDoble *P_newPrior);
		//getter
		string getValue();
		NodoDoble *getNext();
		NodoDoble *getPrior();
};

