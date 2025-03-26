#pragma once

template <typename T> class Node{
    public:
        T value;
        Node<T> *next;
        Node(T);
        ~Node();
};
