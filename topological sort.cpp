class Solution {
  public:
  void dfs(int node, vector<vector<int>> &adj,vector<bool> &visited, stack<int> &st){
      visited[node] = true;
      for(auto neighbour: adj[node]){
          if(!visited[neighbour])
            dfs(neighbour, adj, visited, st);
      }
      st.push(node);
  }
  
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);
        for(auto i : edges){
            int u = i[0];
            int v = i[1];
            adj[u].push_back(v);
        }
        
        vector<bool> visited(V, false);
        stack<int> st;
        
        for(int i=0;i <V;i++){
            if(!visited[i]){
                //dfs
                dfs(i, adj, visited, st);
                
            }
        }
        vector<int> result;
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        return result;
    }
};