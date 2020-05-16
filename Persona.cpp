/* 
 * File:   Persona.cpp
 * Author: Fernando Ambrosio
 *
 * Created on 3 de mayo de 2020, 14:20
 */
#include "Persona.h"

Persona::Persona() {
    
}

Persona::Persona(string dpi) {
    this->dpi = dpi;
}

Persona::Persona(string dpi, string nombre) {
    this->dpi = dpi;
    this->nombre = nombre;
}

Persona::~Persona() {
    
}

/**
 * Establece el nombre del ciudadano.
 * @param nombre de tipo string.
 */
void Persona::setNombre(string nombre) {
    this->nombre = nombre;
}

/**
 * Obtiene el nombre del ciudadano.
 * @return nombre del ciudadano.
 */
string Persona::getNombre() {
    return this->nombre;
}

/**
 * Establece el CUI del contacto.
 * @param dpi CUI de tipo long
 */
void Persona::setDpi(string dpi) {
    this->dpi = dpi;
}

/**
 * Obtiene el DPI o CUI del contacto
 * @return CUI
 */
string Persona::getDpi() {
    return this->dpi;
}

/**
 * Estable el apellido del contacto
 * @param apellido tipo string.
 */
void Persona::setApellido(string apellido){
    this->apellido = apellido;
}

/**
 * Obtiene el apellido del contacto.
 * @return apellido del contacto.
 */
string Persona::getApellido(){
    return this->apellido;
}