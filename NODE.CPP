
#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

// Insert at Head
void insertathead(node*& head, int value) {
    node* newnode = new node();

    newnode->data = value;
    newnode->next = head;

    head = newnode;
}

// Insert at Tail
void insertattail(node*& head, int value) {
    node* newnode = new node();

    newnode->data = value;
    newnode->next = nullptr;

    if (head == nullptr) {
        head = newnode;
        return;
    }

    node* temp = head;

    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newnode;
}

// Display Linked List
void display(node* head) {
    node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";
}

int main() {
    node* head = nullptr;

    insertathead(head, 10);
    insertathead(head, 20);

    insertattail(head, 30);
    insertattail(head, 40);

    cout << "Linked List: ";
    display(head);

    return 0;
}





   