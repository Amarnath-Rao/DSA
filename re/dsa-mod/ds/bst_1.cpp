#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;

    Node(int value) : val(value), left(nullptr), right(nullptr) {}
};

struct BST {
    Node* root;

    BST() : root(nullptr) {}

    Node* insert(Node* node, int val) {
        if (node == nullptr) {
            return new Node(val);
        }
        if (val < node->val) {
            node->left = insert(node->left, val);
        } else {
            node->right = insert(node->right, val);
        }
        return node;
    }

    Node* search(Node* node, int val) {
        if (node == nullptr || node->val == val) {
            return node;
        }
        if (val < node->val) {
            return search(node->left, val);
        }
        return search(node->right, val);
    }

    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current && current->left != nullptr) {
            current = current->left;
        }
        return current;
    }

    Node* deleteNode(Node* node, int val) {
        if (node == nullptr) return node;
        if (val < node->val) {
            node->left = deleteNode(node->left, val);
        } else if (val > node->val) {
            node->right = deleteNode(node->right, val);
        } else {
            if (node->left == nullptr) {
                Node* temp = node->right;
                delete node;
                return temp;
            } else if (node->right == nullptr) {
                Node* temp = node->left;
                delete node;
                return temp;
            }
            Node* temp = minValueNode(node->right);
            node->val = temp->val;
            node->right = deleteNode(node->right, temp->val);
        }
        return node;
    }

    void printInorder(Node* node) {
        if (node == nullptr) return;
        printInorder(node->left);
        cout << node->val << " ";
        printInorder(node->right);
    }

    bool isBalanced(Node* node){
        if (node == nullptr) return true;
        int leftHeight = height(node->left);
        int rightHeight = height(node->right);
        return abs(leftHeight - rightHeight) <= 1 && isBalanced(node->left) && isBalanced(node->right);
    }

    int height(Node* node) {
        if (node == nullptr) return 0;
        return max(height(node->left), height(node->right)) + 1;
    }
};

int main() {
    BST tree;
    tree.root = tree.insert(tree.root, 50);
    tree.root = tree.insert(tree.root, 30);
    tree.root = tree.insert(tree.root, 20);
    tree.root = tree.insert(tree.root, 40);
    tree.root = tree.insert(tree.root, 70);
    tree.root = tree.insert(tree.root, 60);
    tree.root = tree.insert(tree.root, 80);

    cout << "In-order traversal: ";
    tree.printInorder(tree.root);
    cout << endl;

    int searchVal = 40;
    Node* foundNode = tree.search(tree.root, searchVal);
    if (foundNode) {
        cout << "Found " << searchVal << " in the tree." << endl;
    } else {
        cout << searchVal << " not found in the tree." << endl;
    }

    tree.root = tree.deleteNode(tree.root, 20);
    cout << "In-order traversal after deleting 20: ";
    tree.printInorder(tree.root);
    cout << endl;

    cout << "Is the tree balanced? " << (tree.isBalanced(tree.root) ? "Yes" : "No") << endl;

    return 0;
}
/*
Binary Search Tree (BST) (std::set):
insert(x) – Inserts element x while maintaining BST order.
erase(x) – Removes the element x.
find(x) – Finds element x (returns iterator).
lower_bound(x) – Finds the first element not less than x.
upper_bound(x) – Finds the first element greater than x.
size() – Returns the size of the set.
empty() – Checks if the set is empty.
clear() – Removes all elements.
*/