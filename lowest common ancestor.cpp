/*url:https://www.hackerrank.com/challenges/binary-search-tree-lowest-common-ancestor/problem

You are given pointer to the root of the binary search tree and two values v1 and v2 . You need to return the lowest common ancestor (LCA) of  v1 and v2 in the binary search tree. You only need to complete the function.*/


/*
 Node is defined as
 
 typedef struct node
 {
 int data;
 node * left;
 node * right;
 }node;
 
 */


node * lca(node * root, int v1,int v2)
{
    if(v1>root->data && v2> root->data)
    {
        root=lca(root->right,v1,v2);
        return root;
        
    }
    else if(v1 < root->data && v2 < root->data)
    {
        root=lca(root->left,v1,v2);
        return root;
    }
    else
        return root;   
    
}
