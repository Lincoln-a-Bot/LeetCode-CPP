class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size() - 1;
        
        for (int i = n ; i >= 0; i--) 
        {
            if (digits[i] == 9) 
            {
                digits[i] = 0;
            } else {
                digits[i]++;
                return digits;
            }
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};