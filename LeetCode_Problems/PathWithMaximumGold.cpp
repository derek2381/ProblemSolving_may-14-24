// problem link
// https://leetcode.com/problems/path-with-maximum-gold/?envType=daily-question&envId=2024-05-14


class Solution {
public:
    int dfs(vector<vector<int>>& arr, int i, int j){
        int col = arr[0].size();
        int row = arr.size();
        if(i < 0 || j < 0 || i >= row || j >= col || arr[i][j] == 0){
            return 0;
        }

        int temp = arr[i][j];
        arr[i][j] = 0;

        int sumUp = dfs(arr, i-1,j);
        int sumDown = dfs(arr, i+1, j);
        int sumLeft = dfs(arr, i, j-1);
        int sumRight = dfs(arr, i, j+1);

        arr[i][j] = temp;
        return temp + max(sumUp, max(sumDown, max(sumLeft, sumRight)));
    }

    int getMaximumGold(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        int res = 0, sum = 0;

        for(int i = 0; i< row;i++){
            for(int j = 0; j < col;j++){
                if(grid[i][j] > 0){
                    sum = dfs(grid, i, j);
                    res = max(sum, res);
                }
            }
        }

        return res;
    }
};
