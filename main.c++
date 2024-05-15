#include <windows.h>
#include <locale>

#include "libreria.h"

int main() {
	setlocale(LC_ALL, "spanish");
    char opcion;
// Ventana de presentación del proyecto.
    cout << "BIENVENIDO A NUESTRO SOFTWARE, ESTE PROGRAMA HA SIDO DESARROLLADO POR: "
		 << endl;
	cout << "\nJulian Rojas: 0222320040        Eduardo Tuñon: 0222320052        "
       		"Luis Aristizabal: 0222310005\nEstudiantes de Ingenieria de "
       		"sistemas.\n\n"
   		<< endl;

  	cout << "En este programa simularemos algunas funciones básicas de un procesador de texto como:\n"
	  		"Función para ambiar color del texto.\n\n"

			"Funciones de control para mayúsculas y minúsculas: Cambiar de mayúsculas a minúsculas y viceversa\n"
			"poner mayúscula en el inicio del texto, mayúscula en el inicio de cada palabra\n"
			"y mayúsculas intercaladas con minúsculas.\n\n"

			"Funciones copiar, cortar y pegar.\n\n"

			"Funciones para buscar una cadena tentro  del texto, reemplazarla o sustraerla.\n\n"

			"Funciones que muestren información como la cantidad de palabras, de caracretes alfabéticos,\n"
			"numéricos, caracteres especiales y de espacios en blanco.\n\n";

    	system("pause");
    	system("cls");

    do {
        fflush(stdin);
        system("cls");
        char texto[30000];
    	cout << "Ingrese texto seguido del caracter '`' y enter para guardar: ";
        cin.getline(texto, 30000, '`');
        system("cls");
        
        mostrarMenu();
        cout << "Ingrese su opción: ";
        cin >> opcion;
        system("cls");

        switch(opcion) {
            case '1':
                cambiarColorTexto(texto);
                break;
            case '2':
                //menu();
                break;
            case '3':
                copiarCortarPegar(texto);
                break;
            case '4':
                buscarReemplazarSustraer(texto);
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
        cout << endl;
        system("pause");
    } while(opcion != '6');
    	

    return 0;
}
