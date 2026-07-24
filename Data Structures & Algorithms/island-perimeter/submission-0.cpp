class Solution {
   public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;
        int rows = grid.size();
        for (int row = 0; row < rows; row++) {
            for (int col = 0; col < grid[row].size(); col++) {
                if (grid[row][col] == 1) {
                    perimeter += 4;
                    if (row - 1 >= 0 && grid[row - 1][col] == 1) perimeter -= 1;
                    if (col + 1 <= grid[row].size() - 1 && grid[row][col + 1] == 1) perimeter -= 1;
                    if (col - 1 >= 0 && grid[row][col - 1] == 1) perimeter -= 1;
                    if (row + 1 <= grid.size() - 1 && grid[row + 1][col] == 1) perimeter -= 1;
                }
            }
        }
        return perimeter;
    }
};