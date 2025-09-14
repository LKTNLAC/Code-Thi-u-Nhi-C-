#include <bits/stdc++.h>
//Single linked list
using namespace std;


class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class SinglyLinkedList {
    public:
    Node* head;
    SinglyLinkedList() : head(nullptr) {}
//___________________________________
//Insert an element x at the beginning of the singly linked list
    void insertAtBeginning(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
//___________________________________
//Insert an element x at position of the singly linked list
    void insertAtPosition(int data, int position) {
        if (position == 0) {
            insertAtBeginning(data);
            return;
        }

        Node* newNode = new Node(data);
        Node* current = head;
        for (int i = 0; i < position - 1; ++i) {
            if (current == nullptr) {
                cerr << "Position out of bounds" << endl;
                return;
            }
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
//_____________________________________
//Remove an element from the beginning of the singly linked list
    void removeFromBeginning() {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }
//___________________________________
//Remove an element from the position of the singly linked list
    void removeFromPosition(int position) {
        if (position == 0) {
            removeFromBeginning();
            return;
        }

        Node* current = head;
        for (int i = 0; i < position - 1; ++i) {
            if (current == nullptr || current->next == nullptr) {
                cout << "Position out of bounds" << endl;
                return;
            }
            current = current->next;
        }
        Node* temp = current->next;
        current->next = temp->next;
        delete temp;
    }
//_______________________________
//Search for an element x in the singly linked list and return its pointer
    Node* search(int data) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == data) {
                return current;
            }
            current = current->next;
        }
        return nullptr;
    }
//_________________________________
//Concatenate two singly linked lists
    void concatenate(SinglyLinkedList& otherList) {
        if (head == nullptr) {
            head = otherList.head;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = otherList.head;
        }
        otherList.head = nullptr;
    }
//__________________________________
    // Destructor to free memory
    ~SinglyLinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }
};
int main() {
//_________________________________
    SinglyLinkedList list1;
    //Insert at beginning
    list1.insertAtBeginning(3); // 3
    list1.insertAtBeginning(2); // 2 -> 3
    list1.insertAtBeginning(1); // 1 -> 2 -> 3
//_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
    //Output
    cout << "List 1 after inserting at beginning: ";
    Node* current = list1.head;
    //Print list 1
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
//________________________________
    SinglyLinkedList list2;
    //Insert at beginning list 2
    list2.insertAtBeginning(6); // 6
    list2.insertAtBeginning(5); // 5 -> 6
    list2.insertAtBeginning(4); // 4 -> 5 -> 6
//_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
    cout << "List 2 after inserting at beginning: ";
    current = list2.head;
    //Print list 2
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
//_______________________________
//Concatenate two singly linked lists
    list1.concatenate(list2);
//_ _ _ _ _ _ _ _ _ _ _ _ _ _ _
    cout << "List 1 after concatenating with List 2: ";
    current = list1.head;
    //Print list concatenate
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
//___________________________________
    list1.insertAtPosition(7, 2);//  (value,position)
    //1 -> 2 -> 7 -> 3 -> 4 -> 5 -> 6 -> nullptr
//_ _ _ _ _ _ _ _ _ _ _ _Output
    cout << "List 1 after inserting at position 2: ";
    current = list1.head;
    //Print list 1
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
//_______________________________________
//Remove an element from the beginning of the singly linked list
    list1.removeFromBeginning();
    //2 -> 7 -> 3 -> 4 -> 5 -> 6 -> nullptr
//_ _ _ _ _ _ _ _ _ _ _ _ _ _ _Output
    cout << "List 1 after removing from beginning: ";
    current = list1.head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
//_______________________________________
//Remove an element from the position of the singly linked list
    list1.removeFromPosition(2);//Remove at position
    //2 -> 7 -> 4 -> 5 -> 6 -> nullptr
//_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ Output
    cout << "List 1 after removing from position 2: ";
    current = list1.head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
//______________________________________________
//Search for an element x in the singly linked list and return its pointer
    long pos = 3;
    Node* foundNode = list1.search(pos); //Search
    //Check and output
    if (foundNode != nullptr) {
        cout << "Element " << pos << " found in List 1" << endl;
    } else {
        cout << "Element " << pos << " not found in List 1" << endl;
    }
//______________________________________________
    return 0;
}

