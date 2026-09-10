class Solution {
   public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> rem_ast;
        for (int& ast : asteroids) {
            if (ast > 0)
                rem_ast.push_back(ast);
            else {
                while (!rem_ast.empty() && rem_ast.back() > 0 &&
                       rem_ast.back() < abs(ast))
                    rem_ast.pop_back();
                if (!rem_ast.empty() && rem_ast.back() == abs(ast))
                    rem_ast.pop_back();
                else if (rem_ast.empty() || rem_ast.back() < 0)
                    rem_ast.push_back(ast);
            }
        }
        return rem_ast;
    }
};