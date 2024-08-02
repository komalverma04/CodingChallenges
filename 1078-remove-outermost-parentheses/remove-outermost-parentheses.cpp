class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<int>st;
        int n = s.size(); string ans = "";
        for(int i = 0; i<n;i++){
            if(s[i] == '('){
                st.push(i);
            }else{
                if(s[st.top()] == '('){
                    if(st.size() == 1){
                        int ind = st.top();
                        ans = ans + s.substr(ind+1,i-ind-1);
                    }
                    st.pop();
                }
            }
        }
        return ans;
    }
};