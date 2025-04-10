// Jossie Gates
// 4-6-2025
// CSDP 250
// Project 2
// main.cpp

#include <iostream>
#include <string>
#include <cctype>
#include "Stack.h"
#include "queue.h"
//function declarations
void numABinary(int, Stack&);
void numBBinary(double, Queue&);
using namespace std;
int main() {
    //variable declaration
    double userIn; //user input
    int numA; //integer part of input
    double numB; //below 1 part of input
    
    cout << "Hello!\nThis program will convert a decimal number into a binary number!"<<endl;
    
    //intialization
        cout<<"Please enter the number you want to convert>> ";
        cin >> userIn;
    
    numA = userIn;
    numB = userIn - numA;
    //using Stack and Queue classes
    Stack s;
    Queue q;
    //calling functions
    numABinary(numA, s);
    numBBinary(numB, q);
    
    //display result
    cout <<"Decimal: "<<userIn<<endl
    <<"Binary: ";
    if(!s.isEmpty())
        s.displayStack();
    if(!q.isEmptyQ()){
        cout<<".";
        q.displayQueue();}
    cout<<endl;
    
    //clear stack and queue
    s.clear();
    q.clearQ();
    
    return 0;
}

//function definitions
void numABinary(int numA, Stack &s) {
    //using stack to hold binary number of 1 or above
    if (numA == 0) {
        s.push(0);
        return;
    }
    while (numA > 0) {
        int remainA = numA % 2;
        s.push(remainA);
        numA /= 2;
    }
}


void numBBinary(double numB, Queue &q) {
    //using queue to hold the binary number of input below 1
    int count = 0;
    while (numB > 0 && count < 8) {
        numB *= 2;
        int bit = static_cast<int>(numB);
        q.enqueue(bit);
        numB -= bit;
        count++;
    }
}
