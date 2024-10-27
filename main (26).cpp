
#include <iostream>
using namespace std;

struct node {
    int value;
    node* next; 
};

node* head = NULL;  
void insertNode(int data) {
    node* newNode = new node;  
    newNode->value = data;
    newNode->next = NULL;    
    if (head == NULL) {  
        head = newNode; 
    } else {
        node* last = head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = newNode;  
    }
}

void display() {
    node* currentNode = head;
    if (head == NULL) {
        cout << "The linked list is empty." << endl;
    } else {
        while (currentNode != NULL) {
            cout << currentNode->value << " "; 
            currentNode = currentNode->next; 
        }
        cout << endl;
    }
}

int main() {
    insertNode(40);
    insertNode(50);
    insertNode(20);
    insertNode(10);
    display();

    return 0;
}
