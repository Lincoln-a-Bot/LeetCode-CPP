class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> triangle = {};

        if (rowIndex == 0)
        {
            return {1};
        }        
        triangle.push_back({1});
        
        for (int i = 1; i < rowIndex + 1; i++)
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
        return triangle[rowIndex];
    }
};