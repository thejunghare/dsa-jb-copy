#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *left;
  Node *right;
  Node(int value)
  {
    data = value;
    left = nullptr;
    right = nullptr;
  }
};

void insertNode(Node *&root, int value)
{
  if (root == nullptr)
  {
    root = new Node(value);
    return;
  }

  if (value < root->data)
  {
    insertNode(root->left, value);
  }
  else
  {
    insertNode(root->right, value);
  }
}
// DFS -> in order algorithm
void sortLowToHigh(Node *root)
{
  if (root != nullptr)
  {
    sortLowToHigh(root->left);
    cout << root->data << endl;
    sortLowToHigh(root->right);
  }
}

void sortHighToLow(Node *root)
{
  if (root != nullptr)
  {
    sortLowToHigh(root->right);
    cout << root->data << endl;
    sortLowToHigh(root->left);
  }
}

int main()
{
  Node *root = nullptr;

  insertNode(root, 50);
  insertNode(root, 30);
  insertNode(root, 40);
  insertNode(root, 20);
  insertNode(root, 10);
  sortLowToHigh(root);
}