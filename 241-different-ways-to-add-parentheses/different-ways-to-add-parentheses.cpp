class Solution {
public:
    vector<int> diffWaysToCompute(string e) {
        vector<int>result;
        int size = e.size();
        for(int i = 0;i<size;i++){
            char cur = e[i];
            if(cur == '+' || cur == '-' || cur == '*'){
                vector<int> result1 = diffWaysToCompute(e.substr(0,i));
                vector<int> result2 = diffWaysToCompute(e.substr(i+1));
                for(auto n1: result1){
                    for(auto n2: result2){
                        if(cur == '+'){
                            result.push_back(n1+n2);
                        }else if(cur == '-'){
                            result.push_back(n1-n2);
                        }else{
                            result.push_back(n1*n2);
                        }
                    }
                }
            }

        }
        if(result.empty()){
            result.push_back(stoi(e));
        }
        return result;
    }
};