#include <iostream>
using namespace std;
int main() {
    // n -> number of nodes
    // m -> number of edges
    // We are considering an undirected graph 
    // u <-> v
    // It is mandatory to traverse all the nodes
    // Time Complexity -> O(n)
    int n, m;
    cin >> n >> m;
    int ** adjMatrix = new int * [n+1]; // for 0-based indexing
    for (int i = 0; i <=n; ++i) {
        adjMatrix[i] = new int[n+1];
        for (int j = 0; j <=n ; ++j) {
            adjMatrix[i][j] = 0;
        }
    }
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        // Undirected u->v & v->u
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1; // Skip this part for directed
    }
    for (int i = 1; i <=n ; ++i) {
        for (int j = 1; j <=n ; ++j) {
            cout << adjMatrix[i][j] << " ";
        }cout << endl;
    }
    delete[] adjMatrix;
    return 0;
}
