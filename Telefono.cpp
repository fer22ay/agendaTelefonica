#include <iostream>
#include <cstdlib>
#include <unordered_set>
#include "Telefono.h"

using namespace std;

Telefono::Telefono() {

}

Telefono::Telefono(int telefono) {
    this->telefono = telefono;
}

Telefono::Telefono(string tipo) {
    this->tipoTelefono = tipo;
}

Telefono::Telefono(int telefono, string tipo) {
    this->telefono = telefono;
    this->tipoTelefono = tipo;
}

/**
 * Estable el numero de telefono del contacto.
 * @param telefono de tipo long.
 */
void Telefono::setTelefono(int telefono) {
    this->telefono = telefono;
}

/**
 * Obtiene el numero de telefono del contacto.
 * @return el numero de telefono.
 */
int Telefono::getTelefono() {
    return telefono;
}

/**
 * Establece el tipo de telefono para el contacto
 * @param tipo string
 */
void Telefono::setTipoTelefono(string tipo) {
    this->tipoTelefono = tipo;
}

/**
 * Obtiene el tipo de telefono del contacto
 * @return tipo de telefono del contacto
 */
string Telefono::getTipoTelefono() {
    return tipoTelefono;
}

/**
 * Metodo que desplega el nemu de opciones para escoger el tipo de telefono
 * Que se desea guardar. Aqui se almacena el tipo de telefono y el numero
 * de telefono que debe contener 8 digitos.
 * @param numero de tipo long define el numero de telefono.
 */
void Telefono::escogerTipoTelefono() {
    int numero;
    int exit = 0;
    do {
        cout << endl;
        cout << "1. Numero de casa" << endl;
        cout << "2. Numero Movil" << endl;
        cout << "3. Numero de Oficina" << endl;
        cout << "4. Numero del Trabajo" << endl;
        cout << "5. Numero Personal" << endl;
        cout << "0. Salir" << endl;


        int respuesta;
        cout << "Ingresa una opcion : ";
        cin >> respuesta;
        switch (respuesta) {
            case 0:
                exit = 0;
                break;
            case 1:
                Telefono::setTipoTelefono("CASA");
                cout << "Ingresa un numero de 8 digitos : ";
                cin >> numero;
                Telefono::setTelefono(numero);
                cout << Telefono::getTipoTelefono() << ": " << Telefono::getTelefono();
                break;
            case 2:
                Telefono::setTipoTelefono("MOVIL");
                cout << "Ingresa un numero de 8 digitos : ";
                cin >> numero;
                Telefono::setTelefono(numero);
                cout << Telefono::getTipoTelefono() << ": " << Telefono::getTelefono();
                break;
            case 3:
                Telefono::setTipoTelefono("OFICINA");
                cout << "Ingresa un numero de 8 digitos : ";
                cin >> numero;
                Telefono::setTelefono(numero);
                cout << Telefono::getTipoTelefono() << ": " << Telefono::getTelefono();
                break;
            case 4:
                Telefono::setTipoTelefono("TRABAJO");
                cout << "Ingresa un numero de 8 digitos : ";
                cin >> numero;
                Telefono::setTelefono(numero);
                cout << Telefono::getTipoTelefono() << ": " << Telefono::getTelefono();
                break;
            case 5:
                Telefono::setTipoTelefono("PERSONAL");
                cout << "Ingresa un numero de 8 digitos : ";
                cin >> numero;
                Telefono::setTelefono(numero);
                cout << Telefono::getTipoTelefono() << ": " << Telefono::getTelefono();
                break;
            default:
                cout << endl;
                cout << "....!!Selecciona una opción!!...";
                cout << endl;
                exit = 1;
                break;
        }

    } while (exit != 0);


}

void Telefono::validarTelefono() {
    int x;
    while (telefono != 0) {
        telefono = telefono / 10;
        x++;
    }
    if (x > 7 && x < 9) {
        cout << "Numero valido" << endl;
    } else {
        cout << "Numero no valido" << endl;
    }
    cout << "El telefono tiene " << x << " numeros";
}