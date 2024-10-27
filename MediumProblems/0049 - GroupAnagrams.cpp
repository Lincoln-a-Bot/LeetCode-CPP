class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string, vector<string>> umap;

        for (auto& str : strs) 
        {
            string word = str;
            sort(word.begin(), word.end());
            umap[word].push_back(str);
        }

        vector<vector<string>> output;
        for (const auto& pair : umap) 
        {
            output.push_back(pair.second);
        }

        return output;    
    }
};

