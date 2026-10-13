class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;

        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                 if(grid[i][j]=='1'&& visited[i][j]==0){
                    ans++;
                    visited[i][j]=1;
                    queue<pair<int,int>>q;
                    q.push({i,j});
                    while(!q.empty()){
                        auto[i,j]=q.front();
                        q.pop();
                        if(i-1>=0 && grid[i-1][j]=='1' && visited[i-1][j]==0){
                             q.push({i-1,j});
                             visited[i-1][j]=1;
                        }
                        if(i+1<n && grid[i+1][j]=='1' && visited[i+1][j]==0){
                            q.push({i+1,j});
                            visited[i+1][j]=1;
                        }
                        if(j-1>=0 && grid[i][j-1]=='1' && visited[i][j-1]==0){
                            q.push({i,j-1});
                             visited[i][j-1]=1;
                        }
                        if(j+1 < m && grid[i][j+1]=='1' && visited[i][j+1]==0){
                            q.push({i,j+1});
                            visited[i][j+1]=1;
                        }

                    }
                 }
            }
        }
        return ans;
    }
};
