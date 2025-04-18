#include <iostream>
#include <vector>
using namespace std;

int main() {
    // n -> nodes
    // m -> edges
    // Undirected Graph
    int n, m;
    cin >> n >> m;
    vector<int> adjList[n+1]; // 0-based indexing
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        // Undirected u -> v & v -> u both
        adjList[u].push_back(v);
        adjList[v].push_back(u); // For directed don't do this
    }
    for (int i = 1; i <= n; ++i) {
        cout << "Node: " << i << " : Neighbours: ";
        for (int v : adjList[i]) {
            cout << v << ",";
        }
        cout << endl;
    }

    return 0;
}
