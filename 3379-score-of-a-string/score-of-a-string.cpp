class Solution {
public:
    int scoreOfString(string s) {
        int i = 0;
        int j = 1;
        int n = s.size();
        int diff = 0;
        while(j < n){
            diff += abs(int(s[i]) - int(s[j]));
            i++; j++;
        }
        return diff;
        
    }
};