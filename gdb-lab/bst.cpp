
#include <iostream>

class Node {
    public:
        Node *left, *right;
        int val;
        Node(int _val): val(_val), left(NULL), right(NULL) {}
};

Node *root;

Node* insert_node(Node* current, int val) {
    if (current == NULL)
        return new Node(val);
    if (current->val < val)
        insert_node(current->right, val);
    else
        insert_node(current->left, val);
    return current;
}

void traverse_bst(Node* current) {
    if (current == NULL) return;
    traverse_bst(current->left);
    std::cout << current->val << " ";
    traverse_bst(current->right);
}

int main() {
    int arr[10] = {1, 3, 2, 10, 4, 50, 44, 86, 25, 11};
    root = NULL;
    for (int i = 0;i < 10;i++)
        root = insert_node(root, arr[i]);
    traverse_bst(root);
    std::cout << "\n";
}