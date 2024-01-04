#include "NodoDoble.h"
using namespace std;

class ListaDoble{
private:
	NodoDoble *m_objPrior;
	int Dim;
public:
	ListaDoble();
	~ListaDoble();
	void Alta(string X);
	string Baja();
	string toString();
	string Buscar(string p);
	string getLast();
};
