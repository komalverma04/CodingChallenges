class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int i = 0;
        long long int maxi = INT_MIN;
       long long  int diff = 0;
        while(i < n){
            if(s[i] == '('){
                diff++;
                maxi = max(maxi, diff);
            }else if(s[i] ==')'){
                diff--;
            }
            i++;
        }
        return maxi == INT_MIN? 0: maxi;
    }
};