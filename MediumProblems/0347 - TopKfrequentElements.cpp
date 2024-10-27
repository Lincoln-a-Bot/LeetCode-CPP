//being honest i used some gpt bc i didnt know how to sort the vector in cpp 😭

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int, int> umap;
        vector<int> asw;

        for (auto& c : nums) {
            umap[c]++;
        }

        for (const auto& entry : umap) {
            asw.push_back(entry.first);
        }

        sort(asw.begin(), asw.end(), [&umap](int a, int b) {
            return umap[a] > umap[b];
        });

        asw.resize(k);

        return asw;
    }
};

