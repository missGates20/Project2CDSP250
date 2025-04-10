// Jossie Gates
// 4-6-2025
// CSDP 250
// Project 2
// Stack.h

#ifndef Stack_h
#define Stack_h
//save integer's binary result with stack
class Stack{
    private:
        struct StackNode{
            int val;
            StackNode * next;
        };
public:
    StackNode * top;
    //constructor and deconstructor
    Stack();
    ~Stack();
    //add to stack
    void push(int);
    //check if stack is empty
    bool isEmpty();
    //clear the stack
    void clear();
    //display stack contents
    void displayStack() const;
};
#endif
