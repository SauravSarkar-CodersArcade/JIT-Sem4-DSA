#include <bits/stdc++.h>
using namespace std;
class DijkstraPQ {
public:
    vector<int> dijkstra(int V, vector<vector<pair<int,int>>>&adj, int s){
        // Priority queue
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        // Initialise the distance array to infinity
        // To suggest that the nodes are not reachable in the beginning
        vector<int> distTo(V, INT_MAX);
        // Make the distance to the source node equal to 0
        distTo[s] = 0;
        pq.push({0,s});
        // Pop the min value from the min heap
        // Traverse to all it's adjacent nodes
        while (!pq.empty()){
            int node = pq.top().second;
            int dis = pq.top().first;
            pq.pop();
            // Traverse all it's adjacent nodes
            // Check if the previous distance is greater than current
            // If greater, we consider the current & push in pq
            // Relaxation
            for (auto it : adj[node]){
                int v = it.first;
                int w = it.second;
                if (dis + w < distTo[v]){
                    distTo[v] = dis + w;
                    // If this distance is smaller, we push it into pq
                    pq.push({dis+w,v});
                }
            }
        }
        // Return the distance array which has the shortest
        // distance from the source node 's' to all the other nodes
        // Time Complexity is E Log V
        return distTo;
    }
};
int main() {
    int V = 6, s = 0;
    vector<vector<pair<int,int>>> adj(V);
    // Add all the edges node by node serially
    adj[0].push_back({1,4});
    adj[0].push_back({2,4});
    adj[1].push_back({0,4});
    adj[1].push_back({2,2});
    adj[2].push_back({0,4});
    adj[2].push_back({1,2});
    adj[2].push_back({3,3});
    adj[2].push_back({4,1});
    adj[2].push_back({5,6});
    adj[3].push_back({2,3});
    adj[3].push_back({5,2});
    adj[4].push_back({2,1});
    adj[4].push_back({5,3});
    adj[5].push_back({3,2});
    adj[5].push_back({4,2});
    adj[5].push_back({2,6});
    DijkstraPQ obj;
    vector<int> result = obj.dijkstra(V,adj,s);
    for (int x : result){
        cout << x << " ";
    }cout << endl;
    return 0;
}
