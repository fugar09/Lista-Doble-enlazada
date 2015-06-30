/*
 * Persona.cpp
 *
 *  Created on: May 8, 2015
 *      Author: b38603
 */
#include "stdafx.h"
#include "Persona.h"

Persona::Persona(int id, string nombre) {
	this->id= id;
	this->nombre=nombre;
}

Persona::Persona() {
}

Persona::~Persona() {
}

int Persona::getId() const {
	return this->id;

}

void Persona::setId(int id) {
	this->id= id;
}

string Persona::getNombre()  const {
	return this->nombre;
}

void Persona::setNombre(string nombre) {
	this->nombre= nombre;
}

