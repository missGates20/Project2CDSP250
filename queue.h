// Jossie Gates
// 4-6-2025
// CSDP 250
// Project 2
// queue.h

#ifndef queue_h
#define queue_h
//save decimal number's binary result with Queue
class Queue{
private:
    struct QueueNode{
        int value;
        QueueNode *nextQ;};
public:
    int numItems;//number of bits (digits to save) = 8
    QueueNode *front, *rear;
    //constuctor and deconstructor
    Queue();
    ~Queue();
    //add to queue
    void enqueue(int);
    //remove from queue
    void dequeue(int &);
    //check if queue is empty
    bool isEmptyQ() const;
    //check if queue is full
    bool isFullQ() const;
    //clear queue
    void clearQ();
    //display queue
    void displayQueue() const;
};

#endif
