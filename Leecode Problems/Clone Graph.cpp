#include <bits/stdc++.h>
using namespace std;


class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

class Solution {
public:
    unordered_map<Node*, Node*> cloneMap;

    Node* cloneGraph(Node* node) {
        if (!node) return nullptr;

        // If node is already cloned, return it
        if (cloneMap.find(node) != cloneMap.end())
            return cloneMap[node];

        // Clone the node
        Node* cloneNode = new Node(node->val);
        cloneMap[node] = cloneNode;

        // Clone neighbors recursively
        for (Node* neighbor : node->neighbors) {
            cloneNode->neighbors.push_back(cloneGraph(neighbor));
        }

        return cloneNode;
    }
};

// Helper to build sample graph for testing
Node* buildSampleGraph() {
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);

    n1->neighbors = {n2, n4};
    n2->neighbors = {n1, n3};
    n3->neighbors = {n2, n4};
    n4->neighbors = {n1, n3};

    return n1;
}

// Helper to print graph (BFS)
void printGraph(Node* node) {
    if (!node) {
        cout << "Empty Graph" << endl;
        return;
    }
    unordered_set<Node*> visited;
    queue<Node*> q;
    q.push(node);
    visited.insert(node);

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        cout << "Node " << curr->val << " neighbors: ";
        for (auto neigh : curr->neighbors) {
            cout << neigh->val << " ";
            if (!visited.count(neigh)) {
                visited.insert(neigh);
                q.push(neigh);
            }
        }
        cout << endl;
    }
}

int main() {
    Solution sol;

    Node* original = buildSampleGraph();
    cout << "Original Graph:" << endl;
    printGraph(original);

    Node* cloned = sol.cloneGraph(original);
    cout << "\nCloned Graph:" << endl;
    printGraph(cloned);

    return 0;
}
