#include <bits/stdc++.h>

using namespace std;

class CircularQueue {
private:
    vector<int> items;
    int front;
    int rear;
    int size;
    int capacity;

public:
    CircularQueue(int capacity){
        this->capacity =capacity;
        this->items.resize(capacity);
        this->front = 0;
        this->rear = -1;
        this->size = 0;
    }

    bool isFull(){
        return size == capacity;
    }

    bool isEmpty(){
        return size == 0;
    }

    void enqueue(int item){
        if(isFull()){
            cout << "Queue is Full. Cannot enqueue." << endl;
            return;
        }
        rear = (rear + 1) % capacity;
        items[rear] = item;
        size++;
    }
    int dequeue(){
        if(isEmpty()){
            cout<< "Queue is empty. Cannot dequeue." << endl;
            return -1;
        }
        int dequeuedItem = items[front];
        front = (front + 1) % capacity;
        size--;
        return dequeuedItem;
    }
    int peek(){
        if(isEmpty()){
            cout<< "Queue is empty. Cannot peek." << endl;
            return -1;
        }
        return items[front];
    }
    int getSize(){
        return size;
    }
};
int main(){
    CircularQueue queue(5);
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);

    cout << "Dequeued: " << queue.dequeue() << endl;
    cout << "Peek: " << queue.peek() << endl;
    cout << "Size: " << queue.getSize() << endl;
    return 0;
}
