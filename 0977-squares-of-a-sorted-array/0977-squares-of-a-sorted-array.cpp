class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums){
        int n=nums.size();
        vector<int> res(n);
        int f=0;
        int r=n-1;
        for(int i=n-1;i>=0;i--){
            if(abs(nums[f])>abs(nums[r])){
                res[i]=nums[f]*nums[f];
                f++;
            }
            else{
                res[i]=nums[r]*nums[r];
                r--;
            }
        }
        
        return res;
    }
};