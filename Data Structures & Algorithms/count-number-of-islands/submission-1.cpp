class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int ans=0;
        vector<vector<int>>visited(grid.size(),vector<int>(grid[0].size(),0));
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1' && visited[i][j]==0 ){

                    queue<pair<int,int>>q;
                    q.push({i,j});
                    visited[i][j]=1;
                    ans+=1;
                    while(!q.empty()){
                        auto[m,n]=q.front();
                        q.pop();
                        if(m-1>=0 && grid[m-1][n]=='1' && visited[m-1][n]==0 ){
                            q.push({m-1,n});
                            visited[m-1][n]=1;
                        }
                         if(m+1<grid.size() && grid[m+1][n]=='1' && visited[m+1][n]==0 ){
                            q.push({m+1,n});
                            visited[m+1][n]=1;
                        }
                        if(n+1<grid[0].size() && grid[m][n+1]=='1' && visited[m][n+1]==0 ){
                            q.push({m,n+1});
                            visited[m][n+1]=1;
                        }
                         if(n-1>=0 && grid[m][n-1]=='1' && visited[m][n-1]==0 ){
                            q.push({m,n-1});
                            visited[m][n-1]=1;
                        }
                    }
                }
            }
        }
        return ans;
    }
};
