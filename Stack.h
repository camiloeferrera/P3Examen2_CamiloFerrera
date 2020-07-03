#ifndef STACK_H
#define STACK_H

#include "Nodo.h"

class Stack
{
	public:
		~Stack();
		
		Stack(){
            head = nullptr;
        };
        Stack(Nodo* _head){
            head = _head;
        };
        Nodo* pop(){
            Nodo* temp_head = head;
            head = head->getNext();
            return temp_head;
        };
        Nodo* top(){
            return head;
        };
        void push(Nodo* _node){
            _node->setNext(head);
            head = _node;
        };
        void delete_stack(Nodo* _node){
            if (_node->getNext() != nullptr){
                delete_stack(_node->getNext());
            }            
            delete _node;
        }
	protected:
		Nodo* head;
};

#endif
