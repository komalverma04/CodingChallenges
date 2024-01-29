
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       queue<Node*>q;
       vector<int>FinalOutput;
       q.push(root);
       while(!q.empty()){
           int sz = q.size();
           int TemporaryValue = 0;
           while(sz--){
               auto p = q.front();
               q.pop();
               TemporaryValue = p->data;
               if(p->left){
                   q.push(p->left);
               }
               if(p->right){
                   q.push(p->right);
               }
           }
           FinalOutput.push_back(TemporaryValue);
       }
       return FinalOutput;
    }
};
