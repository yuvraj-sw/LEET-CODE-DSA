class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int t=0;
        int a=0;
        for(int x:nums){
            t+=x;
        }
        for(int i=0; i< nums.size();i++){
            if(a==t-a-nums[i]){
                return i;
            }
            a+=nums[i];
        }
        return -1;
    }
};