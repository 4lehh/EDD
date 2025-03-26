#pragma once
#include "node.h"
#include "../src/node.cpp"

template <typename T> class LinkedList{
    private:
        Node<T> *top;
        int capacity;
    public:
        LinkedList<T>();
        void push(T);
        T pop();
        int getCapacity();
};
