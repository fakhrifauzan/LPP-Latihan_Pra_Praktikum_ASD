#include "queue.h"

void createQueue(Queue &Q){
    head(Q) = -1;
    tail(Q) = -1;
    for(int i=0; i<=4; i++){
        Q.info[i] = 0;
    }
}

bool isEmpty(Queue Q){
    if((head(Q) == -1) && (tail(Q) == -1)){
        return true;
    }
    return false;
}

bool isFull(Queue Q){
    if((head(Q) == 0) && (head(Q) == 4)){
        return true;
    }
    return false;
}

void enqueue(Queue &Q, infotype x){
    if(isEmpty(Q)){
        head(Q) = 0;
        tail(Q) = 0;
        Q.info[0] = x;
    } else if(isFull(Q)){
        cout << "Antrian Penuh!" << endl;
    } else {
        tail(Q)++;
        Q.info[tail(Q)] = x;
    }
}

infotype dequeue(Queue &Q){
    infotype x = 0;
    if (isEmpty(Q)){
        cout << "Queue Empty" << endl;
    } else {
        x = Q.info[head(Q)];
        for (int i=0; i<tail(Q); i++){
            Q.info[i] = Q.info[i+1];
        }
        tail(Q)--;
        if(tail(Q) == -1){
            head(Q)--;
        }
    }
    return x;
}

void printInfo(Queue Q){
    if(isEmpty(Q)){
        cout << head(Q) << " - " << tail(Q) << "\t | Empty Queue" << endl;
    } else {
        cout << head(Q) << " - " << tail(Q) << "\t | ";
        for(int i = head(Q); i<= tail(Q); i++){
            cout << Q.info[i] << " ";
        }
        cout << endl;
    }
}
