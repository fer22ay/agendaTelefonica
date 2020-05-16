/* 
 * File:   estudiante.h
 * Author: Fernando Ambrosio
 *
 * Created on 3 de mayo de 2020, 20:02
 */
#include <iostream>
#include <cstdlib>
#include "Persona.h"
#include "Telefono.h"
#include "Correo.h"

using namespace std;

struct Contacto : public Persona, public Telefono, public Correo {

public:

    Contacto();
    ~Contacto();

};

