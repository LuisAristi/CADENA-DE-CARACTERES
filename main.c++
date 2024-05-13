#include "libreria.h"
#include <iostream>
#include <sstream>
#include <string>

int main() {
    char opcion;


    do {
        mostrarMenu();
        char texto[30000];
        cout << "Ingrese su opción: ";
        cin >> opcion;
        fflush(stdin);

        cout << "Ingrese texto seguido del caracter '`' y enter para guardar: ";
        cin.getline(texto, 30000, '`');

        switch(opcion) {
            case '1':
                cambiarColorTexto(texto);
                break;
            case '2':
                cambiarMayusculaMinuscula();
                break;
            case '3':
                copiarCortarPegar();
                break;
            case '4':
                buscarYReemplazar();
                break;
            case '5':
                resumenTexto();
                break;
            case '6':
                salir();
                break;
            default:
                cout << "Opción inválida. Intente nuevamente.\n";
        }
    } while(opcion != '6');

    return 0;
}
