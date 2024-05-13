#include "libreria.h"

int main() {
    char opcion;
    

    do {
        mostrarMenu();
        cout << "Ingrese su opción: ";
        cin >> opcion;

        switch(opcion) {
            case '1':
                cambiarColorTexto();
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
