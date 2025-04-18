#include <iostream>
#include <vector>
using namespace std;
class GraphDFS {
private:
    void dfs(int node, vector<int> adjList[],
             vector<int>& visited, vector<int>& ans){
        visited[node] = 1; // Mark src node as visited
        ans.push_back(node);
        // Traverse all the neighbours
        for (auto it : adjList[node]){
            if (!visited[it]){
                dfs(it,adjList,visited,ans);
            }
        }
    }
public:
    vector<int> dfsGraph(int V, vector<int> adjList[]){
        vector<int> visited(V+1,0); // 0-based indexing
        // If the starting node is 0, start = 0
        int start = 1;
        vector<int> ans;
        dfs(start,adjList,visited,ans);
        return ans;
    }
};
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u); // This is undirected so, u <-> v
}
void printDFS(vector<int>& ans){
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " ";
    }cout << endl;
}
int main() {
    vector<int> adjList[6];
    addEdge(adjList,1,2);
    addEdge(adjList,1,3);
    addEdge(adjList,2,4);
    addEdge(adjList,2,5);
    addEdge(adjList,4,5);
    GraphDFS obj;
    vector<int> ans = obj.dfsGraph(5,adjList);
    printDFS(ans);
    return 0;
}
