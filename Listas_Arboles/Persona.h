/*
 * Persona.h
 *
 *  Created on: May 8, 2015
 *      Author: b38603
 */

#pragma once

using namespace std;

class Persona {
private:
	int id;
	string nombre;

public:
	Persona();
	Persona(int, string);
	virtual ~Persona();
	int getId()  const;
	void setId(int);
	string getNombre()  const;
	void setNombre(string);
};


