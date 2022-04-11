class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size(),n=grid[0].size();
        int i,j;
        int s=m*n;
        vector<vector<int>> res(m,vector<int>(n,0));
        for(i=0;i<m;i++){
            for(j=0;j<n;j++)
            {
               
                res[(i+(j+k)/n)%m][(j+k)%n]=grid[i][j];
            }
        }
        
        return res;
    }
};
