#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class CircularQueue {
private:
    Node* front;
    Node* rear;

public:
    CircularQueue() : front(nullptr), rear(nullptr) {}

    bool isEmpty() {
        return front == nullptr;
    }

    void enqueue(int data) {
        Node* newNode = new Node(data);
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        rear->next = front; // Make it circular
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1; // Assuming -1 is an invalid value for the queue
        }

        int removedItem = front->data;
        if (front == rear) {
            delete front;
            front = rear = nullptr;
        } else {
            Node* temp = front;
            front = front->next;
            rear->next = front; // Adjust the rear to maintain circular structure
            delete temp;
        }

        return removedItem;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }

        Node* current = front;
        do {
            cout << current->data << " ";
            current = current->next;
        } while (current != front);

        cout << endl;
    }
};

int main() {
    CircularQueue cq;


    int n=0;
    while(n != -1)
    {
        cout << "Please enter for enqueue, -1 for cancel:  ";
        cin >> n;
        if (n != -1)
                cq.enqueue(n);
    }

    cout << "Queue: ";
    cq.display(); // Output: 1 2 3

    cout << "Dequeue: " << cq.dequeue() << endl; // Output: Dequeue: 1

    cout << "Queue: ";
    cq.display(); // Output: 2 3

    return 0;
}
