auto fast_io = []() {
        ios_base::sync_with_stdio(false);
            cin.tie(NULL);
                return 0;
}();

class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            unordered_set<int> nice;
            for(int num : nums){
                if(nice.count(num)){
                    return true;
                }
                nice.insert(num);
            }
            return false;
        }
};