#pragma once
#include "node.h"
#include "node.cpp"

class LinkedList{
    private:
        Node *top;
        int capacity;
    public:
        LinkedList();
        void push(int);
        int pop();
        int getCapacity();
};
