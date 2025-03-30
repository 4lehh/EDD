#pragma once
#include "node.h"
#include "../src/node.cpp"
#include <optional>

template <typename T> class LinkedList{
    private:
        Node<T> *top;
        int capacity;
    public:
        LinkedList<T>();
        void push(T);
        std::optional<T> pop();
        int getCapacity();
};
