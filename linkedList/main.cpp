#include <iostream>
#include <sys/syslimits.h>
using namespace std;

struct Node {
  int data;
  Node *address;
};

// void insert(Node *newnode, int data) {
//   Node *temp = new Node;
//   temp->data = data;
//   temp->address = NULL;
// }

void printList(Node *head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " -> ";
    temp = temp->address;
  }
  cout << "NULL" << endl;
}

void searchValue(Node *head, int value) {
  if (head == NULL) {
    cout << "linked list is empty" << endl;
    return;
  }

  Node *temp = head;
  int post = 0;
  while (temp != NULL) {
    if (temp->data == value) {
      cout << "value exist at index " << post << endl;
      return;
    }
    temp = temp->address;
    post++;
  }

  cout << "Value doesnot exist" << -1 << endl;
}

void insertAtHead(Node *&head, int value) {
  Node *newNode = new Node;

  // if (head == NULL) {
  // set the number and do not change address
  newNode->data = value;
  newNode->address = head;
  head = newNode;

  // } else {
  //   // store the number and change

  // }
}

void insertAtEnd(Node *&head, int value) {
  Node *newNode = new Node;
  newNode->data = value;
  newNode->address = NULL;
  if (head == NULL) {
    head = newNode;
    return;
  }

  // while
  Node *temp = head;
  while (temp->address != NULL) {
    temp = temp->address; // 30
  }
  temp->address = newNode;
}

void insertInBetween(Node *&head, int value, int index) {

  if (index == 0) {
    insertAtHead(head, value);
    return;
  }

  Node *newNode = new Node;
  newNode->data = value;
  newNode->address = NULL; // 2

  Node *temp = head;
  int i = 0;
  while (temp != NULL && i < index - 1) {
    temp = temp->address;
    i++;
  }

  if (temp == NULL) {
    delete newNode;
    return;
  }
  newNode->address = temp->address;
  temp->address = newNode;
}

void deleteNode(Node *&head, int value) {
  // if list is empty
  if (head == NULL) {
    cout << "Linkedlist is empty " << endl;
    return;
  }

  // node to be deleted is the head node
  if (head->data == value) {
    Node *temp = head;
    head = head->address; // assign next node as node
    delete temp;
    return;
  }

  // node to be deleted is not the head
  Node *temp = head;
  while (temp != NULL && temp->address != NULL) {

    if (temp->address->data == value) {
      Node *nodeToDelete = temp->address;
      temp->address = temp->address->address;
      delete nodeToDelete;
      return;
    }
    temp = temp->address;
  }
}

int main() {
  Node *head = new Node;
  Node *second = new Node;

  head->data = 70;
  head->address = second;

  second->data = 30;
  second->address = NULL;
  // insert(newNode, 70);
  searchValue(head, 50);
  insertAtHead(head, 40);
  insertAtEnd(head, 100);
  insertInBetween(head, 10, 2);
  deleteNode(head, 70);
  printList(head);
}