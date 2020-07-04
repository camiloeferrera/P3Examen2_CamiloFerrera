#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <conio.h>
#include <vector>
using std::vector;
#include <cmath>
using std::sqrt;
#include "Stack.h"
#include "Matriz.h"

vector<int**> matrices;

bool comandoValido(string comando){
	int contCorchetes = 0;
	int contNumeros = 0;
	int contComas = 0;
	for(char c:comando){
		if(c==']'||c=='[')
			contCorchetes++;
		if(c > 47 && c < 58)
			contNumeros++;	
		if(c==',')
			contComas++;	
	}
	
	if(contCorchetes==2 && contNumeros>0 && contComas == contNumeros-1 && comando[1] == '=')
		return true;
	else
		return false;	
}
bool hasSqrt(int numero){
	for(int i=0;i<numero;i++)
		if(i*i == numero)
			return true;
	
	return false;		
}

void imprimirMatriz(int** matriz,int size){
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++)
			cout << "[" << matriz[i][j] << "] ";
		cout << endl;	 
	}
}

int main(){
	while(true){
		string comando;
		cout << ">>";
		cin>>comando;
		if(comandoValido(comando)){
		
			Matriz* matriz = new Matriz(comando,comando[0]);
			if(hasSqrt(matriz->getNumeros().size()))
				imprimirMatriz(matriz->matrizPrimitiva(),sqrt(matriz->getNumeros().size()));
			else
				cout << "Debe ingresar una matriz cuadrada" << endl;	
			
		}else{
			cout << "Comando invalido" << endl;
		}
	}
	
	return 0;
}
