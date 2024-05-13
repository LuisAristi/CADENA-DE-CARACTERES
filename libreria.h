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

void cambiarColorTexto(char texto[]){
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

// Función para cambiar de mayúsculas a minúsculas
string cambiarAMinusculas(string texto) {
    for (char &c : texto) {
        if (isupper(c)) {
            c = tolower(c);
        }
    }
    return texto;
}

// Función para cambiar de minúsculas a mayúsculas
string cambiarAMayusculas(string texto) {
    for (char &c : texto) {
        if (islower(c)) {
            c = toupper(c);
        }
    }
    return texto;
}

// Función para convertir la primera letra en mayúscula
string tipoOracion(string texto) {
    if (!texto.empty()) {
        texto[0] = toupper(texto[0]);
    }
    return texto;
}

// Función para poner en mayúscula cada palabra
string primeraLetraMayuscula(string texto) {
    for (int i = 0; i < texto.length(); ++i) {
        if (i == 0 || texto[i - 1] == ' ') {
            texto[i] = toupper(texto[i]);
        }
    }
    return texto;
}

// Función para alternar mayúsculas y minúsculas
string alternarMayusculasMinuculas(string texto) {
    for (char &c : texto) {
        if (isalpha(c)) {
            if (islower(c)) {
                c = toupper(c);
            } else {
                c = tolower(c);
            }
        }
    }
    return texto;
}

void menu() {
    string texto;
    int opcion;

    cout << "Ingrese un texto: ";
    getline(cin, texto);

    cout << "Seleccione una opción:" << endl;
    cout << "1. Cambiar de Mayúsculas a Minúsculas" << endl;
    cout << "2. Cambiar de Minúsculas a Mayúsculas" << endl;
    cout << "3. Tipo Oración" << endl;
    cout << "4. Poner en mayúscula cada palabra" << endl;
    cout << "5. Alternar Mayúscula/Minúscula" << endl;
    cout << "Opción: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Texto convertido: " << cambiarAMinusculas(texto) << endl;
            break;
        case 2:
            cout << "Texto convertido: " << cambiarAMayusculas(texto) << endl;
            break;
        case 3:
            cout << "Texto convertido: " << tipoOracion(texto) << endl;
            break;
        case 4:
            cout << "Texto convertido: " << primeraLetraMayuscula(texto) << endl;
            break;
        case 5:
            cout << "Texto convertido: " << alternarMayusculasMinuculas(texto) << endl;
            break;
        default:
            cout << "Opción no válida." << endl;
    }
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