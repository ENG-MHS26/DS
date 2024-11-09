
#include <iostream>
using namespace std;

class Node {
public:
    int data;       
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;
    LinkedList() : head(nullptr) {}
    bool isEmpty() {
        return head == nullptr;
    }
    void insertFirst(int newItem) {
        Node* newNode = new Node(newItem);
        if (isEmpty()) {
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }
    int count() {
        int counter = 0;
        Node* temp = head;
        while (temp != nullptr) {
            counter++;
            temp = temp->next;
        }
        return counter;
    }
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    bool isFound(int key) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == key) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
};

int main() {
    LinkedList lst;
    if (lst.isEmpty()) {
        cout << "The list is empty." << endl;
    } else {
        cout << "The list contains " << lst.count() << " items." << endl;
    }
    int item;
    cout << "Enter an item to insert into the list: ";
    cin >> item;
    lst.insertFirst(item);
    lst.display();

    cout << "Enter another item to insert into the list: ";
    cin >> item;
    lst.insertFirst(item);
    lst.display();

    cout << "Enter one more item to insert into the list: ";
    cin >> item;
    lst.insertFirst(item);
    lst.display();
    cout << "The list contains " << lst.count() << " items." << endl;
    cout << "Enter an item to search for: ";
    cin >> item;
    if (lst.isFound(item)) {
        cout << "Item found!" << endl;
    } else {
        cout << "Item not found." << endl;
    }

    return 0;
}
