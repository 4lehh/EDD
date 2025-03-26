class ArrayStack{
    private: 
        int size;
        int* array;
        int capacity;
        
    public:
        ArrayStack(int);
        ~ArrayStack();
        void push(int);
        int pop();
        bool isEmpty();
        bool isFull();
};


