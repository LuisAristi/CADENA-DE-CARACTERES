#include <iostream>
#include <string.h>
#include <cctype> // Para las funciones de manipulación de caracteres

using namespace std;

void mostrarMenu() {
    cout << "=== PROCESADOR DE TEXTO ===\n";
    cout << "1. Cambiar color del texto.\n";
    cout << "2. Cambiar Mayúscula y Minúscula\n";
    cout << "3. Copiar, Cortar y Pegar.\n";
    cout << "4. Buscar, reemplazar y sustraer.\n";
    cout << "5. Resumen del texto.\n";
    cout << "6. Salir\n";
}

void cambiarColorTexto(char texto[]){
    // CÃ³digos de escape ANSI para colores
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

void buscar(char texto[]) {

	fflush(stdin);
    char cadena[30000];
	cout << "Ingrese la cadena a buscar: ";
    cin.getline(cadena, 30000);

	//La función únicamente indica si la cadena fue o no encontrado en el texto.
	if(strstr(texto, cadena)) {
		cout << "\"" << cadena << "\""  << "fue encontrada dentro de \"" << texto << "\".";
	}
	else {
		cout << "\"" << cadena << "\""  << " no fue encontrada dentro de \"" << texto << "\".";
	}
}

void reemplazar(char texto[]) {
	fflush(stdin);
    char buscar[30000];
	cout << "Ingrese la cadena a buscar: ";
    cin.getline(buscar, 30000);
    
    fflush(stdin);
    char reemplazar[30000];
	cout << "Ingrese la cadena a reemplazar: ";
    cin.getline(reemplazar, 30000);
    
    //Punteros inicializados para cada array.
    char* t = texto;
    char* r = reemplazar;
    char* b = buscar;
    
    //Busca si "buscar" esta dentro de "texto" comparando caracter por caracter
    for (int i = 0; i < strlen(texto); ++i) {
    	bool encontrado = true;
        for (int j = 0; j < strlen(buscar); ++j) {
            if (t[i + j] != b[j]) {
                encontrado = false;
                break;
            }
        }
		//Cada vez que se encuentre se reemplaza lo almacenado en "reemplazar" en "texto".
        if (encontrado) {
            for (int j = 0; j < strlen(reemplazar); ++j) {
                t[i + j] = r[j];
            }
            i += strlen(reemplazar) - 1;
    	}
	}
	
	cout << "Texto reemplazado:\n" << texto;
}

void sustraer(char texto[]) {
	fflush(stdin);
    char quitar[30000];
	cout << "Ingrese la cadena a sustraer: ";
    cin.getline(quitar, 30000);
    
    
    char* t = texto;
    char* q = quitar;
    
	//Se busca "quitar" dentro de "texto"
    for (int i = 0; i < strlen(texto); ++i) {
    	bool encontrado = true;
        for (int j = 0; j < strlen(quitar); ++j) {
            if (t[i + j] != q[j]) {
                encontrado = false;
                break;
            }
        }
        
		//Cada que se encuentre se reemplazara por un espacio cada caracter.
        if (encontrado) {
        	for(int j=0; j < strlen(quitar); j++) {
        		t[i+j] = ' ';
			}
    	}
	}
	cout << "Texto luego de substracción:\n" << texto;
}

void buscarReemplazarSustraer(char texto[]) {
	int opcion;
    cout << "Seleccione una opción:" << endl;
    cout << "1. Ingresar una cadena y buscarla dentro del texto." << endl;
    cout << "2. Ingresar una cadena y reemplazarla por otra indicada dentro del texto." << endl;
    cout << "3. Ingresar una cadena y eliminarla del texto." << endl;
    cout << "Opción: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
        	buscar(texto);
            break;
            
        case 2:
            reemplazar(texto);
            break;
        case 3:
            sustraer(texto);
            break;
        default:
            cout << "Opción no reconocida" << std::endl;
            break;
    }
}

//Funcion copiar, hara la funcion de copiar una parte del texto ingresado por el usuario y retornara la parte que eligio el usuario
void copiar(char* texto[]){

  int validador = 0; //Declaramos una variable para validar que el usuario ingrese una opcion valida
  int opc; //Declaramos una variable para la opcion del usuario
  int longitud; //Declaramos una variable para la longitud del texto
  char palabra[100]; //Declaramos un arreglo para guardar la palabra que el usuario ingrese
  
  longitud = strlen(texto[]); //Calculamos la longitud del texto que ingreso el usuario

  char copia [longitud + 1]; //Declaramos un char con el tamaño de la variable texto mas 1 para que se pueda copiar el texto (COMPLETO) si el usuario lo desea.
  
  int inicio, fin;

  do{
  cout << "Digite el indice desde donde se quiere copiar el texto" << endl;
  cin >> inicio;
  cout << "Digite el indice hasta donde se quiere copiar el texto" << endl;
  cin >> fin;

  if(inicio < 0 || inicio > longitud || fin < 0 || fin > longitud || fin < inicio ){ //Se valida que el usuario ingrese un indice que exista en el texto
    cout << "Indice fuera de rango, ingrese valores validos." << endl;  
  }else{
    a = 1;
    }
  }while(a == 0); //Validamos que los indices ingresados sean validos
    
  a = 0; //Reiniciamos la variable a para que se pueda volver a usar en el siguiente switch
    
  for(int i = inicio; i < fin; i++){ //Recorremos el texto desde el indice inicial hasta el indice final y lo guardamos en el char copia.
    
    copia[i] = texto[i];
    
  }

  do{
    
  cout << "Digite la palabra identificadora para pegar la parte copiada: " << endl;
  cin.getline(palabra, sizeof(texto));

  char* resultado = strstr(texto, palabra);

    if(resultado){
      a = 1;
    }else{
      cout << "Palabra no encontrada, ingrese otra palabra contenida en el texto." << endl;
    }
    
  }while(a == 0);

  do{
  cout << "Desea pegar la parte copiada antes o despues de la palabra identificadora" << endl;
  cout << "1. Antes" << endl;
  cout << "2. Despues" << endl;
  cin >> opc;

  switch(opc){
    
    case 1:
      strcat(copia, palabra);
      cout << "La parte copiada se pego antes de la palabra identificadora" << endl;
      break;

    case 2:
      strcat(palabra, copia);
      cout << "La parte copiada se pego despues de la palabra identificadora" << endl;
      break;

    default:
      cout << "Opcion no valida" << endl;
      break;
  }  
  }while(opc != 1 && opc != 2);
  } 
}

//Funcion cortar, hara la funcion de copiar una parte del texto ingresado por el usuario, despues lo eliminara.
void cortar(char* texto[]){ 

  int validador = 0; //Declaramos una variable para validar que el usuario ingrese una opcion valida
  int opc; //Declaramos una variable para la opcion del usuario
  int longitud; //Declaramos una variable para la longitud del texto
  char palabra[100]; //Declaramos un arreglo para guardar la palabra que el usuario ingrese
  
  longitud = strlen(texto[]); //Calculamos la longitud del texto que ingreso el usuario

  char copia [longitud + 1]; //Declaramos un char con el tamaño de la variable texto mas 1 para que se pueda copiar el texto (COMPLETO) si el usuario lo desea.
  
  int inicio, fin;

  do{
  cout << "Digite el indice desde donde se quiere copiar el texto" << endl;
  cin >> inicio;
  cout << "Digite el indice hasta donde se quiere copiar el texto" << endl;
  cin >> fin;

  if(inicio < 0 || inicio > longitud || fin < 0 || fin > longitud || fin < inicio ){ //Se valida que el usuario ingrese un indice que exista en el texto
    cout << "Indice fuera de rango, ingrese valores validos." << endl;  
  }else{
    a = 1;
    }
  }while(a == 0); //Validamos que los indices ingresados sean validos

  a = 0; //Reiniciamos la variable a para que se pueda volver a usar en el siguiente switch
    
  for(int i = inicio; i < fin; i++){ //Recorremos el texto desde el indice inicial hasta el indice final y lo guardamos en el char copia.
    
    copia[i] = texto[i];
    
  }

  for(int i = inicio; i < fin, i++){ //Recorremos el texto desde el indice inicial hasta el final y lo eliminamos del texto.

    texto[i] = ' ';
    
  }

  do{
    
  cout << "Digite la palabra identificadora para pegar la parte copiada: " << endl;
  cin.getline(palabra, sizeof(texto));

  char* resultado = strstr(texto, palabra);

    if(resultado){
      a = 1;
    }else{
      cout << "Palabra no encontrada, ingrese otra palabra contenida en el texto." << endl;
    }
    
  }while(a == 0);

  do{
  cout << "Desea pegar la parte copiada antes o despues de la palabra identificadora" << endl;
  cout << "1. Antes" << endl;
  cout << "2. Despues" << endl;
  cin >> opc;

  switch(opc){
    
    case 1:
      strcat(copia, palabra);
      cout << "La parte copiada se pego antes de la palabra identificadora" << endl;
      break;

    case 2:
      strcat(palabra, copia);
      cout << "La parte copiada se pego despues de la palabra identificadora" << endl;
      break;

    default:
      cout << "Opcion no valida" << endl;
      break;
  }  
  }while(opc != 1 && opc != 2);
  }
}

void copiarCortarPegar(char* texto[]){ //Funcion principal para las funciones COPIAR, CORTAR Y PEGAR

  int opc; //Declaramos una variable paa la opcion del usuario

  do{ //Creamos un do while para que el programa se repita hasta que el usuario quiera salir
    
  cout << "MENU PARA COPIAR, CORTAR Y PEGAR\n" << endl;
  cout << "1. Copiar" << endl;
  cout << "2. Cortar" << endl;
  cout << "3. Salir" << endl;
  cout << "\nIngrese la accion que desea realizarle al texto: " << endl;
  cin >> opc;

    switch(opc){

      case 1:
        copiar(texto);
        break;

      case 2:
        cortar(texto);
        break;

      case 3:
        cout << "Saliendo de la funcion..." << endl;
        break;

      default:
        cout << "Opcion no valida" << endl;
        break;
    }
  }while(opc !=3);
}

void resumenTexto() {
    // Implementa la función para mostrar el resumen del texto
}

void salir() {
    cout << "Saliendo del procesador de texto...\n";
}
