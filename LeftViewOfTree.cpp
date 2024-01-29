#include<bits/stdc++.h>
using namespace std;
class Node {
public:
int data;
Node* left = NULL;
Node* right = NULL;
};
vector<int> leftView(Node *root)
{
    vector<int>FinalOutput;
    if(root == NULL)return FinalOutput;
   queue<Node*>q;
   q.push(root);
   
   while(!q.empty()){
       int sz = q.size();
       int TemporaryValue = 10001;
       while(sz--){
           
           auto CurrentNode = q.front();
           q.pop();
           if(TemporaryValue == 10001){
               TemporaryValue = CurrentNode->data;
           }
           
           if(CurrentNode->left){
               q.push(CurrentNode->left);
           }
           if(CurrentNode->right){
               q.push(CurrentNode->right);
           }
       }
       FinalOutput.push_back(TemporaryValue);
   }
   return FinalOutput;
}