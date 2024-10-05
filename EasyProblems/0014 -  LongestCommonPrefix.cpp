//that aint ez 💀
//i know my solution sucks, but it works soooo...

class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {

        string ans = v[0];
        for (int i = 1; i < v.size(); i++) {

            int j = 0;

            while (j < ans.size() && j < v[i].size() && ans[j] == v[i][j]) {
                j++;
            }

            ans = ans.substr(0, j);

        }
        return ans;
    }
};
