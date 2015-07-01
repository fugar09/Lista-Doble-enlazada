// Listas_Arboles.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Persona.h"
#include "DoublyLinkedList.h"
#include "Iterador.h"

int _tmain(int argc, _TCHAR* argv[])
{


	
	cout << "Lista Doblemente Enlazada de Int" << endl;
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

	cout <<"Inicia el iterador Preincremento"<< endl;
	// Probar Iteradores
	Iterador<int> it = l.begin();
	while (it != l.end()) {
		cout << *it << endl;
		++it;
	}

	cout << "Inicia el iterador Postincremento" << endl;
	// Probar Iteradores posincremento
	Iterador<int> itB = l.begin();
	while (itB != l.end()) {
		cout << *(itB++) << endl;
	}
	cout << endl;
	
	cout << "Inicia el iterador Predecremento" << endl;
	// Probar Iteradores
	Iterador<int> itC = l.rBegin();
	while (itC != l.rEnd()) {
		cout << *itC << endl;
		--itC;
	}

	cout << "Inicia el iterador Postdecremento" << endl;
	// Probar Iteradores posincremento
	Iterador<int> itD = l.rBegin();
	while (itD != l.rEnd()) {
		cout << *(itD--) << endl;
	}
	cout << endl;


	cout << "Lista Doblemente Enlazada de Double" << endl;
	DoublyLinkedList<double> lD;
	lD.insertarFinal(2.5);
	lD.insertarFinal(6.4);
	lD.insertarFinal(7.5);
	lD.insertarInicio(6.1);
	lD.insertar(89.1, 2);
	cout << lD;
	cout << endl;

	cout << "Inicia el iterador Preincremento" << endl;
	// Probar Iteradores
	Iterador<double> it1 = lD.begin();
	while (it1 != lD.end()) {
		cout << *it1 << endl;
		++it1;
	}

	cout << "Inicia el iterador Postincremento" << endl;
	// Probar Iteradores posincremento
	Iterador<double> it2 = lD.begin();
	while (it2 != lD.end()) {
		cout << *(it2++) << endl;
	}
	cout << endl;

	cout << "Inicia el iterador Predecremento" << endl;
	// Probar Iteradores
	Iterador<double> it3 = lD.rBegin();
	while (it3 != lD.rEnd()) {
		cout << *it3 << endl;
		--it3;
	}

	cout << "Inicia el iterador Postdecremento" << endl;
	// Probar Iteradores posincremento
	Iterador<double> it4 = lD.rBegin();
	while (it4 != lD.rEnd()) {
		cout << *(it4--) << endl;
	}
	cout << endl;

	cout << "Lista Doblemente Enlazada de Char" << endl;
	DoublyLinkedList<char> lC;
	lC.insertarFinal('a');
	lC.insertarFinal('$');
	lC.insertarFinal('r');
	lC.insertarInicio('#');
	lC.insertar('y', 2);
	cout << lC;
	cout << endl;

	cout << "Inicia el iterador Preincremento" << endl;
	// Probar Iteradores
	Iterador<char> it5 = lC.begin();
	while (it5 != lC.end()) {
		cout << *it5 << endl;
		++it5;
	}

	cout << "Inicia el iterador Postincremento" << endl;
	// Probar Iteradores posincremento
	Iterador<char> it6 = lC.begin();
	while (it6 != lC.end()) {
		cout << *(it6++) << endl;
	}
	cout << endl;

	cout << "Inicia el iterador Predecremento" << endl;
	// Probar Iteradores
	Iterador<char> it7 = lC.rBegin();
	while (it7 != lC.rEnd()) {
		cout << *it7 << endl;
		--it7;
	}

	cout << "Inicia el iterador Postdecremento" << endl;
	// Probar Iteradores posincremento
	Iterador<char> it8 = lC.rBegin();
	while (it8 != lC.rEnd()) {
		cout << *(it8--) << endl;
	}
	cout << endl;

	cout << "Lista Doblemente Enlazada de Persona" << endl;
	DoublyLinkedList<Persona *> lP;
	lP.insertarFinal(new Persona(1,"Fabian"));
	lP.insertarFinal(new Persona(2, "Gabriela"));
	lP.insertarFinal(new Persona(3, "Laura"));
	lP.insertarInicio(new Persona(5, "Maria"));
	lP.insertar(new Persona(8, "Julio"), 2);

	cout << endl;

	cout << "Inicia el iterador Preincremento" << endl;
	// Probar Iteradores
	Iterador<Persona*> it9 = lP.begin();
	while (it9 != lP.end()) {
		cout << **it9 << endl;
		++it9;
	}

	cout << "Inicia el iterador Postincremento" << endl;
	// Probar Iteradores posincremento
	Iterador<Persona*> it10 = lP.begin();
	while (it10 != lP.end()) {
		cout << **(it10++) << endl;
	}
	cout << endl;

	cout << "Inicia el iterador Predecremento" << endl;
	// Probar Iteradores
	Iterador<Persona*> it11 = lP.rBegin();
	while (it11 != lP.rEnd()) {
		cout << **it11 << endl;
		--it11;
	}

	cout << "Inicia el iterador Postdecremento" << endl;
	// Probar Iteradores posincremento
	Iterador<Persona*> it12 = lP.rBegin();
	while (it12 != lP.rEnd()) {
		cout << **(it12--) << endl;
	}
	cout << endl;

	cout << "Liberar Memoria de cada puntero a persona" << endl;
	// Probar Iteradores
	Iterador<Persona*> it13 = lP.begin();
	while (it13 != lP.end()) {
		delete *(it13++) ;
	}
	

	system("pause");
	return 0;

}

