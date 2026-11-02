
#include<iostream>
using namespace std;
struct node {
    int data;
    node* next;
};
void insertathead(node*& head, int value) {
    node* newnode = new node();
    newnode->data = value;
    newnode->next = head;
    head = newnode;}
void deleteathead(node*& head) {
    if (head == nullptr) {
        cout << "Linked List is Empty";
        return;
    }
    node* temp = head;
    head = head->next;
   delete temp;
}
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
    insertathead(head, 30);
     cout << "Before Deletion: ";
    display(head);
    deleteathead(head);
    cout << "\nAfter Deletion: ";
    display(head);
     return 0;
}

