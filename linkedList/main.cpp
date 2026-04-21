#include <iostream>
#include <sys/syslimits.h>
using namespace std;

struct Node {
  int data;
  Node *add;
};

// void insert(Node *newnode, int data) {
//   Node *temp = new Node;
//   temp->data = data;
//   temp->add = NULL;
// }

int main() {

  Node *head = new Node;
  Node *second = new Node;

  head->data = 70;
  head->add = second;

  second->data = 30;
  second->add = NULL;
  // insert(newNode, 70);

  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " -> ";
    temp = temp->add;
  }
  cout << "NULL" << endl;
}