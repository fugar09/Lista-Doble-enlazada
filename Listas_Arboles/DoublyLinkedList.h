#pragma once

#include "stdafx.h"

#include "Nodo.h"

using namespace std;

template<class T>
class DoublyLinkedList{

	template<class T>
	friend ostream & operator<<(ostream &, DoublyLinkedList<T> &);

private:
	Nodo<T> *inicio, *final;

public:
	DoublyLinkedList(){
		inicio = NULL;
		final = NULL;

	}
	~DoublyLinkedList() {
	}
	void imprimir(ostream& out){
		Nodo<T>* actual = this->inicio;
		while (actual != NULL){
			out << actual->actual << " ";
			actual = actual->siguiente;
		};
	}
	void insertarFinal(T nodo){
		Nodo<T>* temp = new Nodo<T>(nodo);
		if (isEmpty()){
			this->inicio = temp;
			this->final = temp;
		}
		else{
			final->siguiente = temp;
			temp->anterior = final;
			final = temp;
		}
	}

	void insertarInicio(T nodo){
		Nodo<T>* temp = new Nodo<T>(nodo);
		if (isEmpty()){
			this->inicio = temp;
			this->final = temp;
		}
		else{
			temp->siguiente = inicio;
			inicio->anterior = temp;
			inicio = temp;
		}
	}
	void insertar(T nodo, int index){
		Nodo<T>* temp1 = new Nodo<T>(nodo);
		Nodo<T>* temp2 = new Nodo<T>(nodo);
		temp1 = inicio;
		while (--index!=0) {
			temp1 = temp1->siguiente;
		}
		temp2 = temp1->siguiente;
		Nodo<T>* nuevoNodo= new Nodo<T>(nodo);
		nuevoNodo->siguiente = temp2;
		temp2->anterior = nuevoNodo;
		temp1->siguiente = nuevoNodo;
		nuevoNodo->anterior = temp1;
	}
	void remover(int index) {
		Nodo<T>* actual = inicio;
		while (--index != 0) {
			actual = actual->siguiente;
		}
		Nodo<T>* borrar = actual->siguiente;
		Nodo<T>*temp = borrar->siguiente;
		delete borrar;
		actual->siguiente = temp;
		temp->anterior = actual;
	}

	bool isEmpty(){
		return this->final == NULL && this->inicio == NULL;
	}
	T getElemento(int index) {
		Nodo<T>* actual = inicio;
		while (--index != 0) {
			actual = actual->siguiente;
		}
		Nodo<T>* obtener = actual->siguiente;
		return obtener->actual;
	}

	Iterador<T> begin() {
		return Iterador<T>(inicio);
	}

	Iterador<T> end() {
		return Iterador<T>(NULL);
	}

	Iterador<T> rBegin() {
		return Iterador<T>(final);
	}

	Iterador<T> rEnd() {
		return Iterador<T>(NULL);
	}
};

template<class T>
ostream & operator<<(ostream & out, DoublyLinkedList<T> & l) {
	l.imprimir(out);
	return out;
}