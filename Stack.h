#ifndef STACK_STACK_H
#define STACK_STACK_H

#include <iostream>
#include <ostream>

#include "Node.h"

template <typename T>
class Stack{
    Node<T> *topNode;
public:
    Stack() : topNode(nullptr) {}

    T peek() {
        if (topNode == nullptr) {
            cout << "Stos jest pusty" << endl;
        }
        else {
            return topNode->getValue();
        }
    }

    Node<T>* getTopNode() {
        return topNode;
    }

    void setTopNode(Node<T> *newTopNode) {
        topNode = newTopNode;
    }
};

#endif //STACK_STACK_H