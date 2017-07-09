/*https://www.hackerrank.com/challenges/binary-search-tree-insertion/problem
You are given a pointer to the root of a binary search tree and a value to be inserted into the tree. Insert this value into its appropriate position in the binary search tree and return the root of the updated binary tree. You just have to complete the function.*/


/*
 Node is defined as
 
 typedef struct node
 {
 int data;
 node * left;
 node * right;
 }node;
 
 */


node * insert(node * root, int value)
{
    if(root==NULL)
    {
        node* newn = new node;
        root=newn;
        root->data=value;
        return root;}
    
    if(value>=root->data)
    {
        
        if(root->right==NULL)
        {
            node* newnode=new node;
            newnode->data=value;
            root->right=newnode;
        }
        else
            insert(root->right,value);
    }
    
    
    else if(value< root->data)
    {
        if(root->left==NULL)
        {
            node* newn=new node;
            newn->data=value;
            root->left=newn;
        }
        else
            insert(root->left,value);
    }
    return root;
}
