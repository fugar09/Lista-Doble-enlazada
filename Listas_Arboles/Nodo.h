#pragma once

template<class T>
class Nodo {

	template <class T>
	friend class DoublyLinkedList;

	template <class T>
	friend class Iterador;

private:
	T actual;
	Nodo<T> *anterior, *siguiente;

public:
	Nodo(T elemento) {
		this->actual = elemento;
		
		anterior = NULL;
		siguiente = NULL;
	}

	~Nodo() {
	}

};