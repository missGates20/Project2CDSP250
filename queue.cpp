// Jossie Gates
// 4-6-2025
// CSDP 250
// Project 2
// queue.cpp
#include "queue.h"
#include <iostream>
using namespace std;
//constuctor
Queue::Queue(){
    front = nullptr;
    rear = nullptr;
    numItems=0;
}
//deconstructor
Queue::~Queue(){
    clearQ();
}

//add to queue
void Queue::enqueue(int num){
    QueueNode *newNodeQ = nullptr;
    newNodeQ = new QueueNode;
    newNodeQ->value = num;
    newNodeQ->nextQ = nullptr; 
    if(isEmptyQ()){
        front = newNodeQ;
        rear = newNodeQ;
    }
    else{
        rear->nextQ=newNodeQ;
        rear=newNodeQ;
    }
    numItems++;
}
//remove from queue
void Queue::dequeue(int& num){
    QueueNode *tempQ = nullptr;
    if(isEmptyQ())
        cout <<"Queue is empty"<<endl;
    
    else{
        num = front->value;
        tempQ = front;
        front = front->nextQ;
        delete tempQ;
        numItems--;
    }
    if (front == nullptr)
            rear = nullptr;
}

//is queue empty?
bool Queue::isEmptyQ() const{
    if(front==nullptr)
        return true;
    else
        return false;
}
//is queue full?
bool Queue::isFullQ() const{
    if(numItems<8)
        return false;
    else
        return true;
}

//empty queue
void Queue::clearQ(){
    int temp;
    while(!isEmptyQ())
        dequeue(temp);
    
    front = nullptr;
    rear = nullptr;
}

//display contents of queue
void Queue::displayQueue() const {
    QueueNode *nodePtr = front;
    if (isEmptyQ()) {
        cout << "Queue is empty";
    } else {
        while (nodePtr != nullptr) {
            cout << nodePtr->value;
            nodePtr = nodePtr->nextQ;
        }
    }
    cout << endl;
}
