#include<bits/stdc++.h>
#include "treeNode.h"
using namespace std;


//! we are kind of using recurision for printing the tree data structure
void printTree(TreeNode<int>*root){//?the for loop limiter root->children.size() acts as a base case on it self
   if(root == NULL){//?its a edge case not a base case;
    return;
   }
    cout<<root->data<<":";
    for (int  i = 0; i < root->children.size(); i++)
    {
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
      for (int  i = 0; i < root->children.size(); i++)
    {
    printTree(root->children[i]);
    }
}

int main(){
TreeNode <int>* root = new TreeNode<int>(10);
TreeNode <int>* node1 = new TreeNode<int>(100);
TreeNode <int>* node2 = new TreeNode<int>(101);
root->children.push_back(node1);
root->children.push_back(node2);

printTree(root);

return 0;
}