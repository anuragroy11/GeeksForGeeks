/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* You have to complete this function*/
void bfs(int s,vector<int> adj[],bool vis[])
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    
    while (!q.empty()){
        int node = q.front();
        cout << node << " ";
        q.pop();
        
        for (auto i : adj[node]){
            if(!vis[i]){
                vis[i] = true;
                q.push(i);
            }
        }
    }
}