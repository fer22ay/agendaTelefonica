/* 
 * File:   fernando.h
 * Author: Fernando Ambrosios
 *
 * Created on 3 de mayo de 2020, 19:16
 */
#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <cstdlib>
#include "Persona.h"
using namespace std;

struct Persona {
    
private:
    string dpi;
    string nombre;
    string apellido;

public:

    Persona();
    Persona(string);
    Persona(string, string);
    ~Persona();
    void setDpi(string);
    string getDpi();
    void setNombre(string);
    string getNombre();
    void setApellido(string);
    string getApellido();
    
};

#endif	// PERSONA_H

