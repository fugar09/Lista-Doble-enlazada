// Listas_Arboles.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Persona.h"
#include "DoublyLinkedList.h"


int _tmain(int argc, _TCHAR* argv[])
{


	srand(time(NULL));
	DoublyLinkedList<int> l;
	l.insertarFinal(2);
	l.insertarFinal(4);
	l.insertarFinal(5);
	l.insertarInicio(6);
	l.insertar(8, 2);
	cout << l;
	cout << endl;
	l.remover(3);
	cout << l;
	cout << endl;
	cout << l.getElemento(2);
	cout << endl;


	

	system("pause");
	return 0;

}

