#ifndef STACK_NODE_H
#define STACK_NODE_H

template <typename T>
class Node{
    T value;
    Node<T> *prevNode;
public:
    Node(T newValue) : value(newValue), prevNode(nullptr) {}

    T getValue() {
        return value;
    }

    Node<T>* getPrevNode() {
        return prevNode;
    }

    void setPrevNode(Node<T> *newPrevNode) {
        prevNode = newPrevNode;
    }
};

#endif //STACK_NODE_H