class Solution {
    void solve(vector<string>& ans, string output, int open, int closed){
        if(open == 0 && closed == 0) {ans.push_back(output); return;}
        if(open == closed){
            output.push_back('(');
            open--;
            solve(ans, output, open, closed);
        }else if(open == 0 && closed != 0){
            while(closed != 0){
                output.push_back(')');
                closed--;
            }
            solve(ans, output, open, closed);
        }
        else if(open < closed){
            string output1 = output;
            string output2 = output;
            output1.push_back('(');
            solve(ans, output1, open-1, closed);
            output2.push_back(')');
            solve(ans, output2, open, closed-1);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        string output = "";
        output.push_back('(');
        int open = n-1;
        int closed = n;
        vector<string>ans;
        solve(ans, output, open, closed);
        return ans;
    }
};