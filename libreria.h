#include <iostream>
#include <string>
#include <cctype> // Para las funciones de manipulación de caracteres

using namespace std;

void mostrarMenu() {
    cout << "=== PROCESADOR DE TEXTO ===\n";
    cout << "1. Formato de texto\n";
    cout << "2. Resumen del texto\n";
    cout << "6. Salir\n";
}

void cambiarColorTexto(char texto[]) {
    // Códigos de escape ANSI para colores
    char RESET[] = "\033[0m";
    char BLACK[] = "\033[30m";
    char RED[] = "\033[31m";
    char GREEN[] = "\033[32m";
    char YELLOW[] = "\033[33m";
    char BLUE[] = "\033[34m";
    char MAGENTA[] = "\033[35m";
    char CYAN[] = "\033[36m";
    char WHITE[] = "\033[37m";

    // Mostrar menú de colores
    cout << "=== CAMBIAR COLOR DEL TEXTO ===\n";
    cout << "1. Negro\n";
    cout << "2. Rojo\n";
    cout << "3. Verde\n";
    cout << "4. Amarillo\n";
    cout << "5. Azul\n";
    cout << "6. Magenta\n";
    cout << "7. Cyan\n";
    cout << "8. Blanco\n";
    cout << "9. Reset (Volver al color predeterminado)\n";

    char opcion;
    cout << "Seleccione el color deseado: ";
    cin >> opcion;

    // Cambiar el color según la opción seleccionada
    switch(opcion) {
        case '1':
            cout << BLACK;
            break;
        case '2':
            cout << RED;
            break;
        case '3':
            cout << GREEN;
            break;
        case '4':
            cout << YELLOW;
            break;
        case '5':
            cout << BLUE;
            break;
        case '6':
            cout << MAGENTA;
            break;
        case '7':
            cout << CYAN;
            break;
        case '8':
            cout << WHITE;
            break;
        case '9':
            cout << RESET;
            break;
        default:
            cout << "Opción inválida. Seleccionando color predeterminado.\n";
    }

    // Imprimir el texto con el color seleccionado
    int i=0;
    while (texto[i] != '\0') {
        cout << texto[i];
        i++;
    }

    cout << RESET; // Restaurar el color predeterminado
    cout << "\nEl color del texto ha sido cambiado.\n";
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