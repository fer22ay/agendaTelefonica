#include "Correo.h"

Correo::Correo() {

}

Correo::Correo(string direccionDeCorreo) {
    this->direccionDeCorreo = direccionDeCorreo;
}

Correo::Correo(string direccionDeCorreo, string tipoCorreo) {
    this->direccionDeCorreo = direccionDeCorreo;
    this->tipoCorreo = tipoCorreo;
}

/**
 * Establece la direccion del correo electronico.
 * @param direccionDeCorreo de tipo string
 */
void Correo::setDireccionDeCorreo(string direccionDeCorreo) {
    this->direccionDeCorreo = direccionDeCorreo;
}

/**
 * Obtiene el correo del usuario que ingreso.
 * @return el correo electronico.
 */
string Correo::getDireccionDeCorreo() {
    return this->direccionDeCorreo;
}

/**
 * Establece el tipo de correo electronico que desea ingresar el usuario.
 * @param correoT de tipo string
 */
void Correo::setTipoCorreo(string tipoCorreo) {
    this->tipoCorreo = tipoCorreo;
}

/**
 * Obtiene el tipo de correo electronico que ingreso el usuario.
 * @return el tipo de correo electronico.
 */
string Correo::getTipoCorreo() {
    return this->tipoCorreo;
}

/**
 * Metodo que desplega el nemu de opciones para escoger el tipo de correo 
 * electronico que se desea guardar. Aqui se almacena el tipo de correo 
 * electronico y el nombre del correo.
 * @param direccionDeCorreo de tipo string define el correo electronico.
 */
void Correo::escogerTipoDeCorreo() {
    string correo;
    int exit = 0;
    do {
        cout << endl;
        cout << "1. Correo Personal" << endl;
        cout << "2. Correo del Trabajo" << endl;
        cout << "0. Salir" << endl;


        int respuesta;
        cout << "Ingresa una opcion : ";
        cin >> respuesta;
        switch (respuesta) {
            case 0:
                exit = 0;
                break;
            case 1:
                Correo::setTipoCorreo("PERSONAL");
                cout << "Ingresa tu direccion de correo : ";
                cin >> correo;
                Correo::setDireccionDeCorreo(correo);
                cout << Correo::getTipoCorreo() << ": " << Correo::getDireccionDeCorreo();
                break;
            case 2:
                Correo::setTipoCorreo("TRABAJO");
                cout << "Ingresa tu direccion de correo : ";
                cin >> correo;
                Correo::setDireccionDeCorreo(correo);
                cout << Correo::getTipoCorreo() << ": " << Correo::getDireccionDeCorreo();
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