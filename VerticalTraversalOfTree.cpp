#include<bits/stdc++.h>
using namespace std;
class Node {
public:
int data;
Node* left = NULL;
Node* right = NULL;
};
vector<int> verticalOrder(Node *root)
{
        map<int,map<int,vector<int>>> MapNodes;
        queue<pair<Node*,pair<int,int>>>q;
        q.push({root,{0,0}});
        while(!q.empty())
            {
            auto p = q.front();
            q.pop();
            Node* node = p.first;
            int vertical = p.second.first;
            int level = p.second.second;
            MapNodes[vertical][level].push_back(node->data);
            if(node->left)
            {
                q.push({node->left,{vertical-1,level+1}});
            }
            if(node->right)
            {
                q.push({node->right,{vertical+1,level+1}});
            }
        }
        vector<int>FinalOutput;
        for(auto p : MapNodes)
        {
            for(auto q: p.second){
                FinalOutput.insert(FinalOutput.end(),q.second.begin(),q.second.end());
            }
        }
        return FinalOutput;
    }