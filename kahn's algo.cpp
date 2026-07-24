class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) 
    {
        // code here
        //kahn/s algo
        //compute indegree if every node
        //push a;; the nodes with indegree = 0 to the queue
        //remove nodesone by one from queue ,a dn add to the answer
        //for each removesd node, decrease the indegree if its neighbour by 1
        //if any neighbour become indegree == 0 push that it queuue
        // if numebr of visited nodes != numebr if given vertices ->cycle exits
        //return resutl
        vector<vector<int>> adj(V);
        for(auto i : edges)
            {
            int u = i[0];
            int v = i[1];
            adj[u].push_back(v);
            }
            //create indegree vector
            
            vector<int> indegree(V, 0);
            for(int i=0;i<V;i++){
                for(int j :adj[i]){
                    indegree[j]++;
                }
            }
            //push all veritces with indegree 0 in queue
            
            queue<int> q;
            for(int i=0;i<V;i++){
                if(indegree[i]== 0){
                    q.push(i);
                }
            }
            
            vector<int> result;
            while(!q.empty())
            {
                int front = q.front();
                q.pop();
                result.push_back(front);
                
                for(auto neighbour : adj[front])
                {
                    indegree[neighbour]--;
                    
                    if(indegree[neighbour] == 0)
                    {
                        q.push(neighbour);
                }
            }
        }
        return result;
    }
};