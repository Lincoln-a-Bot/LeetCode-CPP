class Solution {
public:
    int strStr(string haystack, string needle) {

        int hslen = haystack.length();
        int nlen = needle.length();
        

         for (int i = 0; i <= hslen - nlen; i++) {
            if (haystack.substr(i, nlen) == needle) {
                return i;
            }
        }
        return -1;
        
    }
};