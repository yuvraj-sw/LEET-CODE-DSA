class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x=nums.size();
        int i=0;
        for(;i<nums.size();i++){
            x^=i;
            x^=nums[i];
        }
        return x;
    }
};