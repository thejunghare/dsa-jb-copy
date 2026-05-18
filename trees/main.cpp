#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void insertNode(Node *&root, int val)
{
    // root -> root null
    // left -> data less than root
    // right -> data greater than root

    // if root is empty
    if (root == nullptr)
    {
        root = new Node(val);
        return;
    }

    if (val < root->data)
    {
        insertNode(root->left, val);
    }
    else
    {
        insertNode(root->right, val);
    }
}

// find min
void findMin(Node *root)
{
    if (root == nullptr)
    {
        cout << "Tree is empty" << endl;
        return;
    }

    //  go left till leaf node and get min
    while (root->left != nullptr)
    {
        root = root->left;
    }

    cout << root->data << endl;
}

// find max
void findMax(Node *root)
{
    if (root == nullptr)
    {
        cout << "Tree is empty" << endl;
        return;
    }

    //  go left till leaf node and get min
    while (root->right != nullptr)
    {
        root = root->right;
    }

    cout << root->data << endl;
}

// search
bool search(Node *root, int target)
{
    if (root == nullptr)
        return false;

    if (target == root->data)
        return true;

    if (target < root->data)
    {
        search(root->left, target);
    }
    else
    {
        search(root->right, target);
    }
}

int main()
{
    Node *root = nullptr;

    insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 40);
    // insertNode(root, 70);
    // insertNode(root, 80);

    // cout << root->data;

    findMin(root);
}
