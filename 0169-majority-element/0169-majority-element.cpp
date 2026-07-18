class Solution {
public:
    int majorityElement(vector<int>& v) {
        int m = 0, c = 0;
        
        for (int x : v) {
            if (c == 0) {
                m = x;
            }
            c += (x == m) ? 1 : -1;
        }
        
        return m;
    }
};