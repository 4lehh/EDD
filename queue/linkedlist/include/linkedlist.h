#pragma once

#include "node.h"
#include <optional>

template <typename T> class LinkedListQueue{
    private: 
        Node<T>* head;
        Node<T>* tail;
        int capacity;
    public:
        LinkedListQueue<T>(T);
        ~LinkedListQueue();
        void enqueue(T);
        std::optional<T> dequeue();
        T front();
        int getCapacity();
};
