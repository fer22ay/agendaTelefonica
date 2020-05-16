/* 
 * File:   Correo.h
 * Author: Fernando Ambrosio
 *
 * Created on 10 de mayo de 2020, 09:22
 */

#ifndef CORREO_H
#define CORREO_H

#include <iostream>
#include <cstdlib>
using namespace std;

struct Correo {
private:
    string direccionDeCorreo;
    string tipoCorreo;
public:
    Correo();
    Correo(string direccionDeCorreo);
    Correo(string direccionDeCorreo, string tipoCorreo);
    void setDireccionDeCorreo(string direccionDeCorreo);
    string getDireccionDeCorreo();
    void setTipoCorreo(string tipoCorreo);
    string getTipoCorreo();
    void escogerTipoDeCorreo();
};

#endif /* CORREO_H */

