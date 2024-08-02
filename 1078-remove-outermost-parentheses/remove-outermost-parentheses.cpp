class Solution {
public:
    string removeOuterParentheses(string s) {
        int diff = 0;
        int n = s.size(); string ans = "";
        for(int i = 0; i<n;i++){
            if(s[i] == '('){
                if(diff > 0){
                    ans = ans + s[i];
                }
                diff++;
            }else{
                diff--;
                if(diff > 0){
                    ans = ans + s[i];
                }            }
        }
        return ans;
    }
};