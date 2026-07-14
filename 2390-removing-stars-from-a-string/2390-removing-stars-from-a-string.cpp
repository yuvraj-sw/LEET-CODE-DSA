auto fast_io = []() {
        ios_base::sync_with_stdio(false);
            cin.tie(NULL);
                return 0;
}();

class Solution {
public:
    string removeStars(string s) {
        stack<char>stk;
        string op="";
        for(char c:s){
            if(c!='*'){
                stk.push(c);
            }
            else{
                stk.pop();
            }
        }
        while(!stk.empty()){
            op+=stk.top();
            stk.pop();
        } 
        reverse(op.begin(),op.end());
        return op;
    }
};