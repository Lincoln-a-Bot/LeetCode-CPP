class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length())
        {
            return false;
        }

        unordered_map<char, int> umap;

        for(int i = 0; i < s.length(); i++)
        {
            umap[s[i]]++;
        }
        for(int i = 0; i < t.length(); i++)
        {
            if(umap[t[i]] == 0)
            {
                return false;
            }
            umap[t[i]]--;
        }
        return true;


    }
};
