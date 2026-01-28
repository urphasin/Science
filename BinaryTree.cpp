#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

struct Node {
    int value;
    struct Node* left;
    struct Node* right;

    Node(int v) : value(v), left(nullptr), right(nullptr) {}
};

struct Node* BuildFiveLayerTree() {
    Node* root = new Node(1);
    queue<Node*> q;
    q.push(root);

    int value = 2;

    // Levels 1 -> 5 (expand 4 times)
    for (int level = 1; level < 5; level++) {
        int LevelSize = q.size();

        for (int i = 0; i < LevelSize; i++) {
            Node* current = q.front();
            q.pop();

            current->left = new Node(value++);
            current->right = new Node(value++);

            q.push(current->left);
            q.push(current->right);
        }
    }
    return root;
}

void PreOrder__Iterative(struct Node* root) {
    if (!root) return;

    stack<struct Node*> ST;
    ST.push(root);

    while (!ST.empty()) {
        struct Node* node = ST.top();
        ST.pop();

        cout << (*node).value << " ";

        // Push right 1st
        if ((*node).right) { ST.push((*node).right); }
        if ((*node).left) { ST.push((*node).left); }
    }
}


void InOrder__Iterative(struct Node* root) {
    if (!root) return;

    stack<struct Node*> ST;
    struct Node* current = root;

    while (current || !ST.empty()) {
        while (current) {
            ST.push(current);
            current = (*current).left;
        }

        current = ST.top();
        ST.pop();

        cout << (*current).value << " ";
        current = (*current).right;
    }
}


void PostOrder__Iterative(struct Node* root) {
    if (!root) return;

    stack<struct Node*> st;
    Node* current = root;
    Node* lastVisited = nullptr;

    while (current || !st.empty()) {
        if (current) {
            st.push(current);
            current = current->left;
        }
        else {
            struct Node* peek = st.top();

            if (peek->right && lastVisited != peek->right) {
                current = peek->right;
            }
            else {
                cout << peek->value << " ";
                lastVisited = peek;
                st.pop();
            }
        }
    }
}

int main() {

    
}