#pragma once

template <typename T> class Node{
    public:
        Node<T> *next;
        Node<T> *back;
        T value;
        Node(T);
        ~Node();
};
