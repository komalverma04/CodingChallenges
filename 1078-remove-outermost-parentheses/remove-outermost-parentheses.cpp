class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<pair<char,int>>st;
        int n = s.size(); string ans = "";
        for(int i = 0; i<n;i++){
            if(s[i] == '('){
                st.push({s[i], i});
            }else{
                if(st.top().first == '('){
                    if(st.size() == 1){
                        int ind = st.top().second;
                        ans = ans + s.substr(ind+1,i-ind-1);
                    }
                    st.pop();
                }
            }
        }
        return ans;
    }
};