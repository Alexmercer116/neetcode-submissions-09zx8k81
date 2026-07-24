class Solution {
   public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;
        int rows = grid.size();
        for (int row = 0; row < rows; row++) {
            for (int col = 0; col < grid[row].size(); col++) {
                if (grid[row][col] == 1) {
                    perimeter += 4;
                    if(row&&grid[row-1][col]) perimeter-=2;
                    if(col&&grid[row][col-1]) perimeter-=2;
                }
            }
        }
        return perimeter;
    }
};