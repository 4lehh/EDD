#pragma once 

template <typename T> class Node{
    public:
        Node(T);
        ~Node();
        T value;
        Node *next;
};
