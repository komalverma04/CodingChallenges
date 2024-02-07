class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n = name.size();
        int m = typed.size();
        if(m == n){
            for(int i = 0;i<n;i++){
                if(name[i] != typed[i]){
                    return false;
                }
            }
            return true;
        }
        if(m < n){
            return false;
        }
        int si = 0;
        int ei = 0;
        if(name[si] != typed[ei]){
            return false;
        }
        while(ei<n && si<m){
            if(name[ei] == typed[si]){
                si++;
                ei++;
            }else{
                
                if(typed[si] != typed[si - 1]){
                    return false;
                }else{
                    while(si < m &&  typed[si] == typed[si - 1]){
                        si++;
                    }
                }
            }
        }
        if(ei < n)return false;
        while(si<m){
            if(typed[si] != typed[si - 1]){
                    return false;
                }else{
                    si++;
                }
        }
         return true;
    }
};