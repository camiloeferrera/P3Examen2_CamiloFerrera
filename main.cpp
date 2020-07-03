#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <conio.h>
#include "Stack.h"
#include "Matriz.h"

int main(){
	int opcion;
	Stack* stack = new Stack();
	while(true){
		cout << "1. Hacer pop de la pila y guardar en operando1" << endl
		<< "2. Hacer pop de la pila y guardar en operador" << endl
		<< "3. Hacer pop de la pila y guardar en operando1" << endl
		<< "4. Evaluar la expresión operando1 <operador> operando2" << endl
		<< "5. Hacer push a la pila del resultado de la operación del paso anterior" << endl
		<< "6. Repetir el proceso hasta que solo quede un elemento en la pila." << endl
		<< "7. Salir" << endl
		<< "Ingrese opcion: ";
		cin >> opcion;
		
		cout << endl;
		
		switch(opcion){
			case 7:{
				exit(0);
			}
		}
	}
	
	delete stack;
	
	return 0;
}
