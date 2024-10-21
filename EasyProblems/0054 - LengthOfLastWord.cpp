class Solution {
public:
    int lengthOfLastWord(string s) {
        int c = 0;
        std::string lw = "";

        for(int i = 0; i < s.length(); i++) 
        {
            if(s[i] == ' ') 
            {
                if (lw != "") 
                {
                    lw = "";
                }
            } else 
            {
                if (lw == "") c = 0;
                lw += s[i];
                c++;
            }
        }

        return c;
    }
};
