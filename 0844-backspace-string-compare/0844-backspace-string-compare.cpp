class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>a;
        stack<char>b;
        for(char c: s){
            if(c!='#'){
                a.push(c);
            }
            else{
                if(!a.empty()){
                    a.pop();
                }
            }
        }
        for(char c:t){
            if(c!='#'){
                b.push(c);
            }
            else{
                if(!b.empty()){
                    b.pop();
                }
            }
        }
        return a==b;
    }
};