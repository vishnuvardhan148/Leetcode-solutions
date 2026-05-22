class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int n=s.length();
        int c=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                c++;
                if(c>0){
                    ans+='(';
                }
            }else if(s[i]==')'){
                c--;
                if(c>-1){
                    ans+=')';
                }
            }
        }
        return ans;
        
    }
};