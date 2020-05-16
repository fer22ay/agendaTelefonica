#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <stack>
#include "Contacto.h"
#include "Telefono.h"


using namespace std;
int numeroTelefono, auxTelefono;
string dpi, auxDpi, auxNombre, nombre, apellido, correo, tipoTelefono, tipoCorreo;
bool encontrado = false;
void mostrarMenu();
void mostrarMenuDeBusqueda();
void mostrarMenuParaModificar();

/**
 * Ejecucion del programa principal.
 * @param argc
 * @param argv
 * @return el menu de la aplicacion
 */
int main(int argc, char** argv) {
    mostrarMenu();
    return 0;
}

/**
 * Metodo para modificar los datos del contacto.
 */
void modificarNombreDeContacto() {
    ofstream aux;
    ifstream leerArchivo;
    encontrado = false;
    aux.open("auxiliar.txt", ios::out);
    leerArchivo.open("Contactos.txt", ios::in);
    if (aux.is_open() && leerArchivo.is_open()) {
        leerArchivo>>nombre;
        while (!leerArchivo.eof()) {
            leerArchivo >> dpi >> apellido >> tipoTelefono >> numeroTelefono >> tipoCorreo>>correo;
            if (!encontrado) {
                encontrado = true;
                cout << "Ingresa el nuevo nombre : ";
                cin>>auxDpi;
                aux << auxDpi << " " << dpi << " " << apellido << " " << tipoTelefono << " " << numeroTelefono << " " << tipoCorreo << " " << correo << endl;
                cout << "Registro modificado con exito..." << endl;
            } else {
                aux << nombre << " " << dpi << " " << apellido << " " << tipoTelefono << " " << numeroTelefono << " " << tipoCorreo << " " << correo << endl;
            }
            leerArchivo>>nombre;
        }
    } else {
        cout << "No se pudo abrir el archivo o aun no ha sido creado" << endl;
    }
    if (encontrado == false) {
        cout << "No se encontro ningun registro" << endl;
    }
    aux.close();
    leerArchivo.close();
    remove("Contactos.txt");
    rename("auxiliar.txt", "Contactos.txt");

    int salir = 0;
    do {

        cout << endl;
        cout << "0. - Regresar al menu" << endl;

        int respuesta = 0;
        cout << "Ingresa una opcion: ";
        cin >> respuesta;
        if (respuesta == 0) {
            system("clear");
            mostrarMenuParaModificar();
            break;
        }
    } while (salir != 0);
}

/**
 * Metodo para modificar el apellido del contacto.
 */
void modificarApellidoDeContacto() {
    ofstream aux;
    ifstream leerArchivo;
    encontrado = false;
    aux.open("auxiliar.txt", ios::out);
    leerArchivo.open("Contactos.txt", ios::in);
    if (aux.is_open() && leerArchivo.is_open()) {
        leerArchivo>>nombre;
        while (!leerArchivo.eof()) {
            leerArchivo >> dpi >> apellido >> tipoTelefono >> numeroTelefono >> tipoCorreo>>correo;
            if (!encontrado) {
                encontrado = true;
                cout << "Ingresa el nuevo apellido : ";
                cin>>auxDpi;
                aux << nombre << " " << dpi << " " << auxDpi << " " << tipoTelefono << " " << numeroTelefono << " " << tipoCorreo << " " << correo << endl;
                cout << "Registro modificado con exito..." << endl;
            } else {
                aux << nombre << " " << dpi << " " << apellido << " " << tipoTelefono << " " << numeroTelefono << " " << tipoCorreo << " " << correo << endl;
            }
            leerArchivo>>nombre;
        }
    } else {
        cout << "No se pudo abrir el archivo o aun no ha sido creado" << endl;
    }
    if (encontrado == false) {
        cout << "No se encontro ningun registro" << endl;
    }
    aux.close();
    leerArchivo.close();
    remove("Contactos.txt");
    rename("auxiliar.txt", "Contactos.txt");

    int salir = 0;
    do {

        cout << endl;
        cout << "0. - Regresar al menu" << endl;

        int respuesta = 0;
        cout << "Ingresa una opcion: ";
        cin >> respuesta;
        if (respuesta == 0) {
            system("clear");
            mostrarMenuParaModificar();
            break;
        }
    } while (salir != 0);

}

/**
 * Metodo para modificar el tipo de telefono del contacto.
 * @param tio string recibe un parametro de tipo texto.
 */
void modificarTipoTelefono() {
    ofstream aux;
    ifstream leerArchivo;
    encontrado = false;
    aux.open("auxiliar.txt", ios::out);
    leerArchivo.open("Contactos.txt", ios::in);
    if (aux.is_open() && leerArchivo.is_open()) {
        leerArchivo>>nombre;
        while (!leerArchivo.eof()) {
            leerArchivo >> dpi >> apellido >> tipoTelefono >> numeroTelefono >> tipoCorreo>>correo;
            if (!encontrado) {
                encontrado = true;
                cout << "Ingresa el nuevo tipo de telefono : ";
                cin>>auxDpi;
                aux << nombre << " " << dpi << " " << apellido << " " << auxDpi << " " << numeroTelefono << " " << tipoCorreo << " " << correo << endl;
                cout << "Registro modificado con exito..." << endl;
            } else {
                aux << nombre << " " << dpi << " " << apellido << " " << tipoTelefono << " " << numeroTelefono << " " << tipoCorreo << " " << correo << endl;
            }
            leerArchivo>>nombre;
        }
    } else {
        cout << "No se pudo abrir el archivo o aun no ha sido creado" << endl;
    }
    if (encontrado == false) {
        cout << "No se encontro ningun registro" << endl;
    }
    aux.close();
    leerArchivo.close();
    remove("Contactos.txt");
    rename("auxiliar.txt", "Contactos.txt");
}

/**
 * Metodo para modficar el telefono del contacto.
 */
void modificarTelefono() {
    ofstream aux;
    ifstream leerArchivo;
    encontrado = false;
    aux.open("auxiliar.txt", ios::out);
    leerArchivo.open("Contactos.txt", ios::in);
    if (aux.is_open() && leerArchivo.is_open()) {
        leerArchivo>>nombre;
        while (!leerArchivo.eof()) {
            leerArchivo >> dpi >> apellido >> tipoTelefono >> numeroTelefono >> tipoCorreo>>correo;
            if (!encontrado) {
                encontrado = true;
                cout << "Ingresa el nuevo nuevo numero de telefono : ";
                cin>>auxTelefono;
                aux << nombre << " " << dpi << " " << apellido << " " << tipoTelefono << " " << auxTelefono << " " << tipoCorreo << " " << correo << endl;
                cout << "Registro modificado con exito..." << endl;
            } else {
                aux << nombre << " " << dpi << " " << apellido << " " << tipoTelefono << " " << numeroTelefono << " " << tipoCorreo << " " << correo << endl;
            }
            leerArchivo>>nombre;
        }
    } else {
        cout << "No se pudo abrir el archivo o aun no ha sido creado" << endl;
    }
    if (encontrado == false) {
        cout << "No se encontro ningun registro" << endl;
    }
    aux.close();
    leerArchivo.close();
    remove("Contactos.txt");
    rename("auxiliar.txt", "Contactos.txt");
}

/**
 * Metodo para modificar el tipo de correo elctronico del contacto.
 */
void modificarTipoDeCorreo() {
    ofstream aux;
    ifstream leerArchivo;
    encontrado = false;
    aux.open("auxiliar.txt", ios::out);
    leerArchivo.open("Contactos.txt", ios::in);
    if (aux.is_open() && leerArchivo.is_open()) {
        leerArchivo>>nombre;
        while (!leerArchivo.eof()) {
            leerArchivo >> dpi >> apellido >> tipoTelefono >> numeroTelefono >> tipoCorreo>>correo;
            if (!encontrado) {
                encontrado = true;
                cout << "Ingresa el nuevo tipo de correo : ";
                cin>>auxDpi;
                aux << nombre << " " << dpi << " " << apellido << " " << tipoTelefono << " " << numeroTelefono << " " << auxDpi << " " << correo << endl;
                cout << "Registro modificado con exito..." << endl;
            } else {
                aux << nombre << " " << dpi << " " << apellido << " " << tipoTelefono << " " << numeroTelefono << " " << tipoCorreo << " " << correo << endl;
            }
            leerArchivo>>nombre;
        }
    } else {
        cout << "No se pudo abrir el archivo o aun no ha sido creado" << endl;
    }
    if (encontrado == false) {
        cout << "No se encontro ningun registro" << endl;
    }
    aux.close();
    leerArchivo.close();
    remove("Contactos.txt");
    rename("auxiliar.txt", "Contactos.txt");
}

void modificarCorreoElectronico() {
    ofstream aux;
    ifstream leerArchivo;
    encontrado = false;
    aux.open("auxiliar.txt", ios::out);
    leerArchivo.open("Contactos.txt", ios::in);
    if (aux.is_open() && leerArchivo.is_open()) {
        leerArchivo>>nombre;
        while (!leerArchivo.eof()) {
            leerArchivo >> dpi >> apellido >> tipoTelefono >> numeroTelefono >> tipoCorreo>>correo;
            if (!encontrado) {
                encontrado = true;
                cout << "Ingresa el nuevo correo electronico : ";
                cin>>auxDpi;
                aux << nombre << " " << dpi << " " << apellido << " " << tipoTelefono << " " << numeroTelefono << " " << tipoCorreo << " " << auxDpi << endl;
                cout << "Registro modificado con exito..." << endl;
            } else {
                aux << nombre << " " << dpi << " " << apellido << " " << tipoTelefono << " " << numeroTelefono << " " << tipoCorreo << " " << correo << endl;
            }
            leerArchivo>>nombre;
        }
    } else {
        cout << "No se pudo abrir el archivo o aun no ha sido creado" << endl;
    }
    if (encontrado == false) {
        cout << "No se encontro ningun registro" << endl;
    }
    aux.close();
    leerArchivo.close();
    remove("Contactos.txt");
    rename("auxiliar.txt", "Contactos.txt");
}

/*
 * Metodo para guardar contactos a la base de datos.
 */
void guardarContacto() {

    Contacto c;
    ofstream miArchivo("Contactos.txt", ios::app);
    int exit = 1;
    do {
        if (miArchivo.is_open()) {
            cout << "Ingresa tu nombre : ";
            cin >> nombre;
            c.setNombre(nombre);
            cout << "Ingresa tu dpi : ";
            cin >> dpi;
            c.setDpi(dpi);
            cout << "Ingresa tu apellido : ";
            cin >> apellido;
            c.setApellido(apellido);
            cout << "Ingresar tipo de numero telefonico: " << endl << endl;
            c.escogerTipoTelefono(); //Llamando a la funcion
            cout << endl << "Que tipo de correo deseas ingresar? : ";
            c.escogerTipoDeCorreo(); //Llamando la funcion
            cout << endl << "Deseas agregarlo a tu agenda ? s/n: ";
            char g;
            cin >> g;
            switch (g) {
                case 's':
                    miArchivo << c.getNombre() << " " << c.getDpi() << " " << c.getApellido() << " " << c.getTipoTelefono() << " " << c.getTelefono() << " " << c.getTipoCorreo() << " " << c.getDireccionDeCorreo() << endl;
                    cout << endl << "Datos guardados..." << endl;
                    break;
                case 'n':
                    cout << "Datos no guardados en la base de datos.." << endl;
                    break;
            }
        }

        cout << endl;
        cout << "1. - Agregar nuevo" << endl;
        cout << "0. - Regresar al menu" << endl;

        int response = 0;
        cout << "Que deseas hacer? : ";
        cin >> response;
        if (response == 0) {
            system("clear");
            exit = 0;
            mostrarMenu();
            break;
        }
        if (response > 0) {
            if (miArchivo.is_open()) {
                cout << "Ingresa tu nombre : ";
                cin >> nombre;
                c.setNombre(nombre);
                cout << "Ingresa tu dpi : ";
                cin >> dpi;
                c.setDpi(dpi);
                cout << "Ingresa tu apellido : ";
                cin >> apellido;
                c.setApellido(apellido);
                cout << "Ingresar tipo de numero telefonico: " << endl << endl;
                c.escogerTipoTelefono(); //Llamando a la funcion
                cout << endl << "Que tipo de correo deseas ingresar? : ";
                c.escogerTipoDeCorreo(); //Llamando la funcion
                cout << endl << "Deseas agregarlo a tu agenda ? s/n: ";
                char g;
                cin >> g;
                switch (g) {
                    case 's':
                        miArchivo << c.getNombre() << " " << c.getDpi() << " " << c.getApellido() << " " << c.getTipoTelefono() << " " << c.getTelefono() << " " << c.getTipoCorreo() << " " << c.getDireccionDeCorreo() << endl;
                        cout << endl << "Datos guardados..." << endl;
                        break;
                    case 'n':
                        cout << "Datos no guardados en la base de datos.." << endl;
                        break;
                }
            }
        }
        miArchivo.close();
    } while (exit != 0);

}

/**
 * Metodo para eliminar los datos de un contacto.
 */
void eliminarContactoPorIdentificacion() {
    ofstream aux;
    ifstream leerArchivo;
    encontrado = false;
    aux.open("auxiliar.txt", ios::out);
    leerArchivo.open("Contactos.txt", ios::in);
    if (aux.is_open() && leerArchivo.is_open()) {
        cout << "Ingresa el numero de identificacion del contacto: ";
        cin>>auxDpi;
        leerArchivo>>nombre;
        while (!leerArchivo.eof()) {
            leerArchivo >> dpi >> apellido >> tipoTelefono >> numeroTelefono >> tipoCorreo>>correo;
            if (auxDpi == dpi) {
                encontrado = true;
                cout << "Registro eliminado con exito..." << endl;
            } else {
                aux << nombre << " " << dpi << " " << apellido << " " << tipoTelefono << " " << numeroTelefono << " " << tipoCorreo << " " << correo << endl;
            }
            leerArchivo>>nombre;
        }
    } else {
        cout << "No se pudo abrir el archivo o aun no ha sido creado" << endl;
    }
    if (encontrado == false) {
        cout << "No se encontro ningun registro" << endl;
    }
    aux.close();
    leerArchivo.close();
    remove("Contactos.txt");
    rename("auxiliar.txt", "Contactos.txt");

    int salir = 0;
    do {

        cout << endl;
        cout << "0. - Regresar al menu" << endl;

        int respuesta = 0;
        cout << "Ingresa una opcion: ";
        cin >> respuesta;
        if (respuesta == 0) {
            system("clear");
            mostrarMenu();
            break;
        }
    } while (salir != 0);

}

/**
 * Metodo para buscar un contacto por medio del cui, numero de indentificacion.
 */
void buscarContactoPorIdentificacion() {

    //    string dpiAux;
    ifstream readFile; //Creamos la variable de lectura.
    readFile.open("Contactos.txt", ios::out | ios::in);
    if (readFile.is_open()) {
        cout << "Ingrese el DPI que deseas buscar ? : ";
        cin>>auxDpi;
        readFile>>nombre;
        encontrado = false;
        while (!readFile.eof()) {
            readFile >> dpi >> apellido >> tipoTelefono >> numeroTelefono >> tipoCorreo >> correo;
            if (auxDpi.compare(dpi) == 0) {
                cout << "__________________________" << endl;
                cout << "DPI: " << dpi << endl;
                cout << "Nombre: " << nombre << endl;
                cout << "Apellido: " << apellido << endl;
                cout << "Tipo de telefono: " << tipoTelefono << endl;
                cout << "Telefono: " << numeroTelefono << endl;
                cout << "Tipo correo: " << tipoCorreo << endl;
                cout << "Correo: " << correo << endl;
                cout << "___________________________" << endl;
                encontrado = true;
            }
            readFile>>nombre;
        }
        if (encontrado == false) {
            cout << "No hay ningun registro..!!" << endl;
        }
    } else {
        cout << "Archivo no encontrado";
    }

    int salir = 0;
    do {

        cout << endl;
        cout << "1. - Modificar contacto" << endl;
        cout << "2. - Eliminar contacto" << endl;
        cout << "0. - Regresar al menu" << endl;

        int respuesta = 0;
        cout << "Ingresa una opcion: ";
        cin >> respuesta;
        if (respuesta == 0) {
            system("clear");
            salir = 0;
            mostrarMenu();
            break;
        }
        if (respuesta > 0 && respuesta < 2) {
            system("clear");
            mostrarMenuParaModificar();
        }
        if (respuesta > 1 && respuesta < 3) {
            cout << "Estas seguro que deseas eliminar s/n : ";
            char g;
            cin >> g;
            switch (g) {
                case 's':
                    eliminarContactoPorIdentificacion();
                    break;
                case 'n':
                    system("clear");
                    cout << "Los datos no se borraron" << endl;
                    salir = 1;
                    break;
                default:
                    cout << "No ingresaste una opcion correcta" << endl;
                    break;
            }
        }

    } while (salir != 0);


    readFile.close();
}

/**
 * Metodo para buscar datos del contacto por medio de su numero de telefono
 */
void buscarContactoPorTelefono() {

    ifstream readFile; //Creamos la variable de lectura.
    readFile.open("Contactos.txt", ios::out | ios::in);
    if (readFile.is_open()) {
        cout << "Ingrese el numero de telefono que desea buscar ? : ";
        cin>>auxTelefono;
        readFile>>nombre;
        encontrado = false;
        while (!readFile.eof()) {
            readFile >> dpi >> apellido >> tipoTelefono >> numeroTelefono >> tipoCorreo >> correo;
            if (auxTelefono == numeroTelefono) {
                cout << "__________________________" << endl;
                cout << "DPI: " << dpi << endl;
                cout << "Nombre: " << nombre << endl;
                cout << "Apellido: " << apellido << endl;
                cout << "Tipo de telefono: " << tipoTelefono << endl;
                cout << "Telefono: " << numeroTelefono << endl;
                cout << "Tipo correo: " << tipoCorreo << endl;
                cout << "Correo: " << correo << endl;
                cout << "__________________________" << endl;
                encontrado = true;
            }
            readFile>>nombre;
        }
        if (encontrado == false) {
            cout << "No hay ningun registro..!!" << endl;
        }
    } else {
        cout << "Archivo no encontrado";
    }

    int salir = 0;
    do {

        cout << endl;
        cout << "1. - Modificar contacto" << endl;
        cout << "2. - Eliminar contacto" << endl;
        cout << "0. - Regresar al menu" << endl;

        int respuesta = 0;
        cout << "Ingresa una opcion: ";
        cin >> respuesta;
        if (respuesta == 0) {
            system("clear");
            salir = 0;
            mostrarMenu();
            break;
        }
        if (respuesta > 0 && respuesta < 2) {
            system("clear");
            mostrarMenuParaModificar();
        }
        if (respuesta > 1 && respuesta < 3) {
            cout << "Estas seguro que deseas eliminar s/n : ";
            char g;
            cin >> g;
            switch (g) {
                case 's':
                    eliminarContactoPorIdentificacion();
                    break;
                case 'n':
                    system("clear");
                    cout << "Los datos no se borraron" << endl;
                    salir = 1;
                    break;
                default:
                    cout << "No ingresaste una opcion correcta" << endl;
                    break;
            }
        }

    } while (salir != 0);

    readFile.close();
}

/**
 * Metodo para buscar contacto por medio de su apellido.
 */
void buscarContactoPorApellido() {
    ifstream readFile; //Creamos la variable de lectura.
    readFile.open("Contactos.txt", ios::out | ios::in);
    if (readFile.is_open()) {
        cout << "Ingrese el apellido que deseas buscar ? : ";
        cin>>auxDpi;
        readFile>>nombre;
        encontrado = false;
        while (!readFile.eof()) {
            readFile >> dpi >> apellido >> tipoTelefono >> numeroTelefono >> tipoCorreo >> correo;
            if (auxDpi.compare(apellido) == 0) {
                cout << "__________________________" << endl;
                cout << "DPI: " << dpi << endl;
                cout << "Nombre: " << nombre << endl;
                cout << "Apellido: " << apellido << endl;
                cout << "Tipo de telefono: " << tipoTelefono << endl;
                cout << "Telefono: " << numeroTelefono << endl;
                cout << "Tipo correo: " << tipoCorreo << endl;
                cout << "Correo: " << correo << endl;
                cout << "__________________________" << endl;
                encontrado = true;
            }
            readFile>>nombre;
        }
        if (encontrado == false) {
            cout << "No hay un dato que coincida con la busqueda." << endl;
        }
    } else {
        cout << "Archivo no encontrado";
    }

    int salir = 0;
    do {

        cout << endl;
        cout << "1. - Modificar contacto" << endl;
        cout << "2. - Eliminar contacto" << endl;
        cout << "0. - Regresar al menu" << endl;

        int respuesta = 0;
        cout << "Ingresa una opcion: ";
        cin >> respuesta;
        if (respuesta == 0) {
            system("clear");
            salir = 0;
            mostrarMenu();
            break;
        }
        if (respuesta > 0 && respuesta < 2) {
            system("clear");
            mostrarMenuParaModificar();
        }
        if (respuesta > 1 && respuesta < 3) {
            cout << "Estas seguro que deseas eliminar s/n : ";
            char g;
            cin >> g;
            switch (g) {
                case 's':
                    eliminarContactoPorIdentificacion();
                    break;
                case 'n':
                    system("clear");
                    cout << "Los datos no se borraron" << endl;
                    salir = 1;
                    break;
                default:
                    cout << "No ingresaste una opcion correcta" << endl;
                    break;
            }
        }

    } while (salir != 0);

    readFile.close();
}

/**
 * Metodo para buscar contacto por medio de su tipo de telefono.
 * Si hay cotactos con el mismo tipo de telefono lo buscara tambien.
 */
void buscarContactoPorTipoTelefono() {
    ifstream readFile; //Creamos la variable de lectura.
    readFile.open("Contactos.txt", ios::out | ios::in);
    if (readFile.is_open()) {
        cout << "Ingrese el tipo de telefono que deseas buscar ? : ";
        cin>>auxDpi;
        readFile>>nombre;
        encontrado = false;
        while (!readFile.eof()) {
            readFile >> dpi >> apellido >> tipoTelefono >> numeroTelefono >> tipoCorreo >> correo;
            if (auxDpi.compare(tipoTelefono) == 0) {
                cout << "__________________________" << endl;
                cout << "DPI: " << dpi << endl;
                cout << "Nombre: " << nombre << endl;
                cout << "Apellido: " << apellido << endl;
                cout << "Tipo de telefono: " << tipoTelefono << endl;
                cout << "Telefono: " << numeroTelefono << endl;
                cout << "Tipo correo: " << tipoCorreo << endl;
                cout << "Correo: " << correo << endl;
                cout << "__________________________" << endl;
                encontrado = true;
            }
            readFile>>nombre;
        }
        if (encontrado == false) {
            cout << "No hay un dato que coincida con la busqueda." << endl;
        }
    } else {
        cout << "Archivo no encontrado";
    }

    int salir = 0;
    do {

        cout << endl;
        cout << "1. - Modificar contacto" << endl;
        cout << "2. - Eliminar contacto" << endl;
        cout << "0. - Regresar al menu" << endl;

        int respuesta = 0;
        cout << "Ingresa una opcion: ";
        cin >> respuesta;
        if (respuesta == 0) {
            system("clear");
            salir = 0;
            mostrarMenu();
            break;
        }
        if (respuesta > 0 && respuesta < 2) {
            system("clear");
            mostrarMenuParaModificar();
        }
        if (respuesta > 1 && respuesta < 3) {
            cout << "Estas seguro que deseas eliminar s/n : ";
            char g;
            cin >> g;
            switch (g) {
                case 's':
                    eliminarContactoPorIdentificacion();
                    break;
                case 'n':
                    system("clear");
                    cout << "Los datos no se borraron" << endl;
                    salir = 1;
                    break;
                default:
                    cout << "No ingresaste una opcion correcta" << endl;
                    break;
            }
        }

    } while (salir != 0);

    readFile.close();
}

/**
 * Metodo para buscar contacto por medio del tipo de correo electronico.
 * Si hay contactos con el mismo tipo de correo los listara.
 */
void buscarContactoPorTipoCorreo() {
    ifstream readFile; //Creamos la variable de lectura.
    readFile.open("Contactos.txt", ios::out | ios::in);
    if (readFile.is_open()) {
        cout << "Ingrese el tipo de correo que deseas buscar ? : ";
        cin>>auxDpi;
        readFile>>nombre;
        encontrado = false;
        while (!readFile.eof()) {
            readFile >> dpi >> apellido >> tipoTelefono >> numeroTelefono >> tipoCorreo >> correo;
            if (auxDpi.compare(tipoCorreo) == 0) {
                cout << "__________________________" << endl;
                cout << "DPI: " << dpi << endl;
                cout << "Nombre: " << nombre << endl;
                cout << "Apellido: " << apellido << endl;
                cout << "Tipo de telefono: " << tipoTelefono << endl;
                cout << "Telefono: " << numeroTelefono << endl;
                cout << "Tipo correo: " << tipoCorreo << endl;
                cout << "Correo: " << correo << endl;
                cout << "__________________________" << endl;
                encontrado = true;
            }
            readFile>>nombre;
        }
        if (encontrado == false) {
            cout << "No hay un dato que coincida con la busqueda." << endl;
        }
    } else {
        cout << "Archivo no encontrado";
    }

    int salir = 0;
    do {

        cout << endl;
        cout << "1. - Modificar contacto" << endl;
        cout << "2. - Eliminar contacto" << endl;
        cout << "0. - Regresar al menu" << endl;

        int respuesta = 0;
        cout << "Ingresa una opcion: ";
        cin >> respuesta;
        if (respuesta == 0) {
            system("clear");
            salir = 0;
            mostrarMenu();
            break;
        }
        if (respuesta > 0 && respuesta < 2) {
            system("clear");
            mostrarMenuParaModificar();
        }
        if (respuesta > 1 && respuesta < 3) {
            cout << "Estas seguro que deseas eliminar s/n : ";
            char g;
            cin >> g;
            switch (g) {
                case 's':
                    eliminarContactoPorIdentificacion();
                    break;
                case 'n':
                    system("clear");
                    cout << "Los datos no se borraron" << endl;
                    salir = 1;
                    break;
                default:
                    cout << "No ingresaste una opcion correcta" << endl;
                    break;
            }
        }

    } while (salir != 0);

    readFile.close();
}

/**
 * Metodo para buscar contacto por medio del correo electronico.
 */
void buscarContactoPorCorreoElectronico() {
    ifstream readFile; //Creamos la variable de lectura.
    readFile.open("Contactos.txt", ios::out | ios::in);
    if (readFile.is_open()) {
        cout << "Ingrese el correo que deseas buscar ? : ";
        cin>>auxDpi;
        readFile>>nombre;
        encontrado = false;
        while (!readFile.eof()) {
            readFile >> dpi >> apellido >> tipoTelefono >> numeroTelefono >> tipoCorreo >> correo;
            if (auxDpi.compare(correo) == 0) {
                cout << "__________________________" << endl;
                cout << "DPI: " << dpi << endl;
                cout << "Nombre: " << nombre << endl;
                cout << "Apellido: " << apellido << endl;
                cout << "Tipo de telefono: " << tipoTelefono << endl;
                cout << "Telefono: " << numeroTelefono << endl;
                cout << "Tipo correo: " << tipoCorreo << endl;
                cout << "Correo: " << correo << endl;
                cout << "__________________________" << endl;
                encontrado = true;
            }
            readFile>>nombre;
        }
        if (encontrado == false) {
            cout << "No hay un dato que coincida con la busqueda." << endl;
        }
    } else {
        cout << "Archivo no encontrado";
    }

    int salir = 0;
    do {

        cout << endl;
        cout << "1. - Modificar contacto" << endl;
        cout << "2. - Eliminar contacto" << endl;
        cout << "0. - Regresar al menu" << endl;

        int respuesta = 0;
        cout << "Ingresa una opcion: ";
        cin >> respuesta;
        if (respuesta == 0) {
            system("clear");
            salir = 0;
            mostrarMenu();
            break;
        }
        if (respuesta > 0 && respuesta < 2) {
            system("clear");
            mostrarMenuParaModificar();
        }
        if (respuesta > 1 && respuesta < 3) {
            cout << "Estas seguro que deseas eliminar s/n : ";
            char g;
            cin >> g;
            switch (g) {
                case 's':
                    eliminarContactoPorIdentificacion();
                    break;
                case 'n':
                    system("clear");
                    cout << "Los datos no se borraron" << endl;
                    salir = 1;
                    break;
                default:
                    cout << "No ingresaste una opcion correcta" << endl;
                    break;
            }
        }

    } while (salir != 0);

    readFile.close();
}

/**
 * Metodo para listar los contactos del usuario
 */
void listarContactos() {

    ifstream leerArchivo;
    leerArchivo.open("Contactos.txt", ios::out | ios::in);
    if (leerArchivo.is_open()) {
        cout << "La informacion de tu agenda es : " << endl;
        cout << "__________________________________" << endl;
        leerArchivo>>nombre;
        while (!leerArchivo.eof()) {
            leerArchivo >> dpi >> apellido >> tipoTelefono >> numeroTelefono >> tipoCorreo >> correo;
            cout << "Nombre: " << nombre << endl;
            cout << "DPI: " << dpi << endl;
            cout << "Apellido: " << apellido << endl;
            cout << "Tipo de Telefono: " << tipoTelefono << endl;
            cout << "Numero Telefonico: " << numeroTelefono << endl;
            cout << "Tipo de correo: " << tipoCorreo << endl;
            cout << "Correo Electronico: " << correo << endl;
            leerArchivo>>nombre;
            cout << "_________________________________" << endl;
        }
    } else {
        cout << "Error, el archivo no se pudo abrir, No ha sido creado" << endl;
    }

    int salir = 0;
    do {

        cout << endl;
        cout << "1. - Volver a listar contactos" << endl;
        cout << "0. - Regresar al menu" << endl;

        int respuesta = 0;
        cout << "Ingresa una opcion: ";
        cin >> respuesta;
        if (respuesta == 0) {
            system("clear");
            mostrarMenu();
            break;
        }
        if (respuesta != 0) {
            listarContactos();
        }

    } while (salir != 0);

    leerArchivo.close();
}

void mostrarMenuParaModificar() {
    int exit = 1;
    do {
        cout << endl;
        cout << "Menu para modificar contactos" << endl;
        cout << endl;
        cout << "1. Modificar DPI" << endl;
        cout << "2. Modificar Nombre" << endl;
        cout << "3. Modificar Apellido" << endl;
        cout << "4. Modificar tipo de telefono" << endl;
        cout << "5. Modificar numero telefonico" << endl;
        cout << "6. Modificar tipo de correo" << endl;
        cout << "7. Modificar correo electronico" << endl;
        cout << "0. Regresar al menu principal" << endl;

        int response;
        cout << endl;
        cout << "Ingrese una opcion : ";
        cin >> response;
        cout << endl;
        switch (response) {
            case 0:
                system("clear");
                mostrarMenu();
                exit = 0;
                break;
            case 1:
                system("clear");
                break;
            case 2:
                modificarNombreDeContacto();
                break;
            case 3:
                system("clear");
                modificarApellidoDeContacto();
                break;
            case 4:
                system("clear");
                modificarTipoTelefono();
                break;
            case 5:
                system("clear");
                modificarTelefono();
                break;
            case 6:
                system("clear");
                modificarTipoDeCorreo();
                break;
            case 7:
                system("clear");
                modificarCorreoElectronico();
                break;
            default:
                cout << endl;
                exit = 0;
                break;
        }
    } while (exit != 0);
}

/**
 * Menu que desplega las opciones que tiene el usuario para hacer las busquedas.
 */
void mostrarMenuDeBusqueda() {
    int exit = 0;
    do {
        cout << endl;
        cout << "Menu para buscar informacion del contacto" << endl;
        cout << endl;
        cout << "1. Buscar por DPI" << endl;
        cout << "2. Buscar por apellido" << endl;
        cout << "3. Buscar por tipo de telefono" << endl;
        cout << "4. Buscar por numero de telefono" << endl;
        cout << "5. Buscar por tipo de correo" << endl;
        cout << "6. Buscar por correo electronico" << endl;
        cout << "0. Cancelar busqueda" << endl;

        int response;
        cout << endl;
        cout << "Ingrese una opcion : ";
        cin >> response;
        cout << endl;
        cout << "opcion ingresada " << response << endl;
        switch (response) {
            case 0:
                system("clear");
                mostrarMenu();
                exit = 0;
                break;
            case 1:
                system("clear");
                buscarContactoPorIdentificacion();
                break;
            case 2:
                system("clear");
                buscarContactoPorApellido();
                break;
            case 3:
                system("clear");
                buscarContactoPorTipoTelefono();
                break;
            case 4:
                system("clear");
                buscarContactoPorTelefono();
                break;
            case 5:
                system("clear");
                buscarContactoPorTipoCorreo();
                break;
            case 6:
                system("clear");
                buscarContactoPorCorreoElectronico();
                break;
            default:
                system("clear");
                exit = 0;
                break;
        }
    } while (exit != 0);
}

/**
 * Metodo para invocar el menu de la aplicacion
 */
void mostrarMenu() {

    int exit = 0;
    do {
        cout << endl;
        cout << "BIENVENIDO AGENDA TELEFONICA" << endl;
        cout << endl;
        cout << "1. Agregar contacto" << endl;
        cout << "2. Buscar contacto" << endl;
        cout << "3. Listar contactos" << endl;
        cout << "0. Salir del programa" << endl;

        int response;
        cout << endl;
        cout << "Ingrese una opcion : ";
        cin >> response;
        cout << endl;
        switch (response) {
            case 0:
                exit = 0;
                break;
            case 1:
                system("clear");
                cout << "Agregar nuevo contacto" << endl;
                guardarContacto();
                break;
            case 2:
                system("clear");
                mostrarMenuDeBusqueda();
                break;
            case 3:
                system("clear");
                listarContactos();
                break;
            default:
                system("clear");
                exit = 0;
                break;
        }
    } while (exit != 0);
}