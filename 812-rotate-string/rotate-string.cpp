class Solution {
public:
    bool rotateString(string s, string goal) {
         int n = s.size();
         int m = goal.size();
         if(m != n)return false;
         for(int i = 0; i<n;i++){
            char c = s[0];
            s.erase(0,1);
            s.push_back(c);
            if(s == goal){
                return true;
            }
         }
         
         return false;
    }
};