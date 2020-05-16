/* 
 * File:   Telefono.h
 * Author: Fernando Ambrosio
 *
 * Created on 4 de mayo de 2020, 23:02
 */

#ifndef TELEFONO_H
#define TELEFONO_H
#include <iostream>
#include <cstdlib>
#include "Persona.h"

using namespace std;

struct Telefono {
private:
    int telefono;
    string tipoTelefono;
public:
    Telefono();
    Telefono(int telefono);
    Telefono(string tipo);
    Telefono(int telefono, string tipo);
    void setTelefono(int telefono);
    int getTelefono();
    void setTipoTelefono(string tipo);
    string getTipoTelefono();
    void escogerTipoTelefono();
    void validarTelefono();

};

#endif /* TELEFONO_H */

