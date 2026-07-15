class Solution {
public:
    bool isValid(string s) {
        stack<char> c;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                c.push(s[i]);
            }
            else{
                if(c.size()==0){
                    return false;
                }
                if((c.top()=='(' && s[i]==')')||
                (c.top()=='{'&& s[i]=='}')||
                (c.top()=='['&& s[i]==']')){
                    c.pop();
                }
                else{
                    return false;
                }
            }
        }
        return c.size()==0;      
    }
};