#pragma once

#include "Nodo.h"

template<class T>
class Iterador {
private:
	Nodo<T> * anterior;
	Nodo<T> * actual;
public:
	Iterador(Nodo<T> * actual) {
		this->anterior = actual;
		this->actual = actual;
	}
	
	~Iterador() {
	}

	// Preincremento
	Iterador<T>& operator++() {
		actual = actual->siguiente;
		return *this;
	}

	// Posincremento
	Iterador<T> operator++(int) {
		Iterador<T> tmp(this->actual);
		++(*this);
		return tmp;
	}

	//Predecremento
	Iterador<T>& operator--() {
		actual = actual->anterior;
		return *this;
	}

	// Posdecremento
	Iterador<T> operator--(int) {
		Iterador<T> tmp(this->actual);
		--(*this);
		return tmp;
	}

	T operator*() {
		return actual->actual;
	}

	bool operator!=(Iterador<T> & otro) {
		return this->actual != otro.actual;
	}

	bool operator==(Iterador<T> & otro) {
		return this->actual == otro.actual;
	}
};