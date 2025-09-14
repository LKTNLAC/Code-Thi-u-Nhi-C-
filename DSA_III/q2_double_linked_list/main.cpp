#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    //_______________________________________________________________________
    // (i) Insert an element x at the beginning of the doubly linked list
    void insertAtBeginning(int x) {
        Node* newNode = new Node(x);
        if (!head) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    //_______________________________________________________________________
    // (ii) Insert an element x at ith position in the doubly linked list
    void insertAtPosition(int x, int i) {
        Node* newNode = new Node(x);
        if (i == 0) {
            insertAtBeginning(x);
        } else {
            Node* current = head;
            int count = 0;
            while (current && count < i) {
                current = current->next;
                count++;
            }
            if (current) {
                newNode->prev = current->prev;
                newNode->next = current;
                current->prev->next = newNode;
                current->prev = newNode;
            } else {
                cout << "Position " << i << " not found." << endl;
                delete newNode;
            }
        }
    }

    //_______________________________________________________________________
    // (iii) Insert an element x at the end of the doubly linked list
    void insertAtEnd(int x) {
        Node* newNode = new Node(x);
        if (!tail) {
            head = tail = newNode;
        } else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    //_______________________________________________________________________
    // (iv) Remove an element from the beginning of the doubly linked list
    void removeFromBeginning() {
        if (head) {
            Node* temp = head;
            head = head->next;
            if (head) {
                head->prev = nullptr;
            } else {
                tail = nullptr;
            }
            delete temp;
        } else {
            cout << "The list is empty." << endl;
        }
    }

    //_______________________________________________________________________
    // (v) Remove an element from ith position in the doubly linked list
    void removeFromPosition(int i) {
        if (i == 0) {
            removeFromBeginning();
        } else {
            Node* current = head;
            int count = 0;
            while (current && count < i) {
                current = current->next;
                count++;
            }
            if (current) {
                current->prev->next = current->next;
                if (current->next) {
                    current->next->prev = current->prev;
                } else {
                    tail = current->prev;
                }
                delete current;
            } else {
                cout << "Position " << i << " not found." << endl;
            }
        }
    }

    //_______________________________________________________________________
    // (vi) Remove an element from the end of the doubly linked list
    void removeFromEnd() {
        if (tail) {
            Node* temp = tail;
            tail = tail->prev;
            if (tail) {
                tail->next = nullptr;
            } else {
                head = nullptr;
            }
            delete temp;
        } else {
            cout << "The list is empty." << endl;
        }
    }

    //_______________________________________________________________________
    // Print the doubly linked list
    void display() {
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList d;

    d.insertAtBeginning(1);

    d.insertAtEnd(2);
    d.insertAtEnd(3);
    d.insertAtEnd(4);
    d.insertAtEnd(5);

    d.insertAtPosition(6, 1);
    cout << "Double linked list after insert: ";
    d.display(); // Output: 1 6 2 3 4 5

    d.removeFromBeginning();

    d.removeFromPosition(2);

    d.removeFromEnd();
    cout << "Double linked list after remove: ";
    d.display(); // Output: 6 2 4

    return 0;
}
