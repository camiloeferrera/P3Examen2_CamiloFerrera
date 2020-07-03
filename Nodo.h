#ifndef NODO_H
#define NODO_H

#include <string>
using std::string;
#include "Object.h"

class Nodo
{
	public:
		Nodo();
		~Nodo();
	public:
		Object* data;
		Nodo* next_node;
		
		Nodo* getNext(){
			return this->next_node;
		}
		
		void setNext(Nodo* _nodo){
			this->next_node=_nodo;
		}
};

#endif
