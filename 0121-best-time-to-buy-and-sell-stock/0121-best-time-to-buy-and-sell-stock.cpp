class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a = INT_MAX;
        int b = 0;
        
        for (int p : prices) {
            if (p < a) {
                a = p;
            } 
            else if (p - a > b) {
                b = p - a;
            }
        }
        
        return b;
    }
};