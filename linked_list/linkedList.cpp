// linkedList.cpp
// CIT 66
// Spring 25
// by Mark Edmunds
//

#include <iostream>
#include <array>

using namespace std;
struct Node {
    int data;
    Node* next;
};

void insertNodeAtEnd(Node* *head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (*head == nullptr) {
        *head = newNode;
    }
    else {
        Node* temp = *head;
        while (temp->next != nullptr) {
            // set temp to the next node to non-null pointer
            temp = temp->next;
        }
        // set the next node to the new node
        temp->next = newNode;
    }
}
void deleteNode(Node* head, int data) {
    Node* temp = head;
    Node* prev = nullptr;
    
    while (temp != nullptr && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }
    // If the node is not found
    if (temp == nullptr) {
        cout << "Node not found" << endl;
    } else { // If the node is found
        prev->next = temp->next;
        delete temp;
    }
};
// Display the list
void displayNodesInList(Node* head) {
    // Traverse the list
    while (head != nullptr) {
        cout << "value of node is: " << head->data << " \n";
        head = head->next;
    }
};
int main() {

    /*
    Singly Linked List Define a Node struct with an integer data field and a pointer to the next node.
    Implement functions to: Insert a node at the end of the list.
    Delete a node by value. Display all nodes in the list.
     */

    // Create a linked list
    Node* head = nullptr;
    cout << "--------- Begin Linked List ---------" << endl;

    // Insert nodes using static method
    cout << "Inserting nodes 1, 2, 3, 4" << endl;
    insertNodeAtEnd(&head, 1);
    insertNodeAtEnd(&head, 2);
    insertNodeAtEnd(&head, 3);
    insertNodeAtEnd(&head, 4);
    // delete nodes 2 and 4
    cout << "Deleting nodes 2 and 4" << endl;
    deleteNode(head, 2);
    deleteNode(head, 4);
    // Display the list
    displayNodesInList(head);
    cout << "--------- End Linked List ---------" << endl;
    return 0;
}