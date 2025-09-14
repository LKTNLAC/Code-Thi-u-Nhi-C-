#include <bits/stdc++.h>

using namespace std;

// Define Node structure for circular linked list
struct CircularNode {
    int data;
    CircularNode* next;
};

// Function to insert an element at the beginning of a circular linked list
CircularNode* insertAtBeginning(CircularNode* head, int x) {
    CircularNode* newNode = new CircularNode();
    newNode->data = x;

    if (head == nullptr) {
        newNode->next = newNode; // Point to itself in an empty list
        return newNode;
    }

    CircularNode* current = head;
    while (current->next != head) {
        current = current->next;
    }

    current->next = newNode;
    newNode->next = head;
    return newNode;
}

// Function to insert an element at the end of a circular linked list
CircularNode* insertAtEnd(CircularNode* head, int x) {
    CircularNode* newNode = new CircularNode();
    newNode->data = x;

    if (head == nullptr) {
        newNode->next = newNode; // Point to itself in an empty list
        return newNode;
    }

    CircularNode* current = head;
    while (current->next != head) {
        current = current->next;
    }

    current->next = newNode;
    newNode->next = head;
    return head;
}

// Function to remove an element from the beginning of a circular linked list
CircularNode* removeFromBeginning(CircularNode* head) {
    if (head == nullptr)
        return nullptr;

    CircularNode* current = head;
    while (current->next != head) {
        current = current->next;
    }

    if (current == head) {
        delete head;
        return nullptr; // Last element removed, list is empty now
    }

    current->next = head->next;
    CircularNode* temp = head;
    head = head->next;
    delete temp;
    return head;
}



// Function to display a circular linked list
void displayList(CircularNode* head) {
    if (head == nullptr) {
        cout << "Circular Linked List is empty." << endl;
        return;
    }

    CircularNode* current = head;
    do {
        cout << current->data << " ";
        current = current->next;
    } while (current != head);
    cout << endl;
}

int main()
{
    CircularNode* circularLinkedList = nullptr;
    int circularChoice;
    do {
        cout << "Circular Linked List Operations:\n";
        cout << "1. Insert at the beginning\n";
        cout << "2. Insert at the end\n";
        cout << "3. Remove from the beginning\n";
        cout << "4. Display the list\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> circularChoice;

        switch (circularChoice) {
            case 1: {
                int x;
                cout << "Enter the element to insert: ";
                cin >> x;
                circularLinkedList = insertAtBeginning(circularLinkedList, x);
                break;
            }
            case 2: {
                int x;
                cout << "Enter the element to insert: ";
                cin >> x;
                circularLinkedList = insertAtEnd(circularLinkedList, x);
                break;
            }
            case 3: {
                circularLinkedList = removeFromBeginning(circularLinkedList);
                break;
            }
            case 4: {
                cout << "Circular Linked List: ";
                displayList(circularLinkedList);
                break;
            }
            case 5:
                break;
                default:
                cout << "Invalid choice. Try again.\n";
            }
        } while(circularChoice != 5);
    return 0;
}
