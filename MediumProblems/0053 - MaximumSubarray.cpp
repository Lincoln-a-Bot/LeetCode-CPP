class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cm = nums[0];
        int gm = nums[0];

        for(int c = 1; c < nums.size(); c++){
            cm = max(nums[c], cm + nums[c]);

            if (cm > gm){
                gm = cm;
            }
        }

        return gm;
    }
};