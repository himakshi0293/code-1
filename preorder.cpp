#include <iostream>
using namespace std;

struct Node {
  int data;
  struct Node *left, *right;
  Node(int data) {
    this->data = data;
    left = right = NULL;
  }
};

void preorderTraversal(struct Node* node) {
  if (node == NULL)
    return;

  cout << node->data << ", ";
  preorderTraversal(node->left);
  preorderTraversal(node->right);
}


int main() {
  struct Node* root = new Node(6);
  root->left = new Node(9);
  root->right = new Node(2);
  root->left->left = new Node(10);
  root->left->right = new Node(1);
  cout << "\nPreorder traversal ";
  preorderTraversal(root);
}