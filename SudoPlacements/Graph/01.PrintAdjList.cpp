#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V) {
    for (int i = 0; i < V; i++) {
        cout << i;
        for (auto x : adj[i])
            cout << "-> " << x;
        cout << endl;
    }
}

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int V, n, u, v;
        cin >> V >> n;
        vector<int> adj[V];
        
        for (int i = 0; i < n; i++) {
            cin >> u >> v;
            addEdge(adj, u, v);
        }
        
        printGraph(adj, V);
    }
    
    return 0;
}