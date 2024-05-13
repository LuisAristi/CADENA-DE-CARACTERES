#include <iostream>
#include <string>
#include <cctype> // Para las funciones de manipulación de caracteres
#include "libreria.h"

using namespace std;

// Funciones para el procesador de texto
void mostrarMenu();
void cambiarColorTexto();
void cambiarMayusculaMinuscula();
void copiarCortarPegar();
void buscarYReemplazar();
void resumenTexto();
void salir();

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

void mostrarMenu() {
    cout << "=== PROCESADOR DE TEXTO ===\n";
    cout << "1. Formato de texto\n";
    cout << "2. Resumen del texto\n";
    cout << "6. Salir\n";
}

void cambiarColorTexto() {
    // Implementa la función para cambiar el color del texto
}

void cambiarMayusculaMinuscula() {
    // Implementa la función para cambiar mayúsculas y minúsculas
}

void copiarCortarPegar() {
    // Implementa la función para copiar, cortar y pegar texto
}

void buscarYReemplazar() {
    // Implementa la función para buscar y reemplazar texto
}

void resumenTexto() {
    // Implementa la función para mostrar el resumen del texto
}

void salir() {
    cout << "Saliendo del procesador de texto...\n";
}