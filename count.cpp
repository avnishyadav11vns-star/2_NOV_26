
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

// Count Nodes
int countnode(node* head) {
    int count = 0;

    node* temp = head;

    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }

    return count;
}

// Display
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

    insertathead(head, 1);
    insertathead(head, 2);
    insertathead(head, 3);
    insertathead(head, 4);

    cout << "Linked List: ";
    display(head);

    cout << "\nTotal Nodes: " << countnode(head);

    return 0;
}
