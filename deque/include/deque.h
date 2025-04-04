#pragma once
#include "node.h"

template <typename T> class Deque{
    private: 
        Node<T> *next;
        Node<T> *back;
        int capacity;
    public:
        Deque();
        ~Deque();
        void pushBack(T);
        void pushFront(T);
        void popBack();
        void popFront();
        T getBack();
        T getFront();
        bool isEmpty();
};
