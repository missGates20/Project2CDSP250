// Jossie Gates
// 4-6-2025
// CSDP 250
// Project 2
// Stack.cpp

#include "Stack.h"
#include <iostream>
using namespace std;

//constructor
Stack::Stack(){
    top = nullptr;
}
//deconstructor
Stack::~Stack(){
    StackNode *nodePtr, *nextNode;
    nodePtr = top;
    while(nodePtr != nullptr){
        nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;
    }
}

void Stack::push(int n){
    StackNode *newNode = nullptr;
    newNode = new StackNode;
    newNode->val=n;
    if(isEmpty()){
        top = newNode;
        newNode->next=nullptr;
    }
    else{
        newNode->next=top;
        top=newNode;
    }
}

bool Stack::isEmpty(){
    if(top==nullptr)
        return true;
    else
        return false;
}


void Stack::clear(){
    StackNode *nodePtr = top;
    StackNode *nextNode = nullptr;

    while(nodePtr != nullptr){
        nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;
    }

    top = nullptr;
}

void Stack::displayStack() const{
    StackNode *nodePtr=nullptr;
    StackNode *nextNode=nullptr;
    nodePtr=top;
    int display;
    while(nodePtr != nullptr){
        display = nodePtr->val;
        cout<<display;
        nextNode=nodePtr->next;
        nodePtr =nextNode;
    }
}

