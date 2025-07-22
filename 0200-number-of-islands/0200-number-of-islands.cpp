class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int islandCount = 0;
        for(int m=0; m<grid.size(); m++){
            for(int n=0; n<grid[m].size(); n++){
                if(grid[m][n] == '1') {
                    dfs(grid, m, n);
                    islandCount++;
                }
            }
        }
        return islandCount;
    }
    void dfs(vector<vector<char>>& grid, int m, int n){
        if(m<0 || m>=grid.size() || n>=grid[0].size()) return;
        
        if(grid[m][n]=='0')return;
        grid[m][n] = '0';
        
        dfs(grid, m-1, n);
        dfs(grid, m+1, n);
        dfs(grid, m, n-1);
        dfs(grid, m, n+1);
    }
};