
class Solution {
public:
    bool isValid(string s) {

        std::unordered_map<char, char> umap;
        umap[')'] = '(';
        umap['}'] = '{';
        umap[']'] = '[';
        std::vector <char> seen;

        for (char v : s)
        {
            if(umap.count(v))
            {
                if (seen.empty() || seen.back() != umap[v])
                {
                    return false;
                }
                seen.pop_back();
            }else
            {
                seen.push_back(v);
            }
        }
        return seen.empty();
        
    }
};