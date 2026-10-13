class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {

        unordered_map<int,vector<int>>adjList;
        int ans=0;
        for(int i=0;i<edges.size();i++){
            adjList[edges[i][0]].push_back(edges[i][1]);
            adjList[edges[i][1]].push_back(edges[i][0]);
        }
       vector<int>visited(n+1,0);
       for(int i=0;i<n;i++){
        if(visited[i]==0){
            ans+=1;
            visited[i]=1;
            queue<int>q;
            q.push(i);
            while(!q.empty()){
                int f=q.front();
                q.pop();
                for(auto v:adjList[f]){
                   if( visited[v]==0){
                     visited[v]=1;
                     q.push(v);
                   }

                }
            }
        }
       }
    return ans;
    }
};
