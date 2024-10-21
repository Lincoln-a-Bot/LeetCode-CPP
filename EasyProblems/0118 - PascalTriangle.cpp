class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle = {};

        if (numRows == 0)
        {
            return {};
        }        
        triangle.push_back({1});
        
        for (int i = 1; i < numRows; i++)
        {
            vector<int> FirstRow = {1};
            vector<int> prevRow = triangle[i-1];
            for (int c = 1; c < i; c++)
            {
                FirstRow.push_back(prevRow[c - 1] + prevRow[c]);
            }
            FirstRow.push_back(1);
            triangle.push_back(FirstRow);
        }
        return triangle;
    }
};