/* 
 
 https://www.hackerrank.com/challenges/tree-postorder-traversal/problem
 Complete the postOrder function in your editor below, which has  parameter: a pointer to the root of a binary tree. It must print the values in the tree's postorder traversal as a single line of space-separated values.
 
 */

/* you only have to complete the function given below.
 Node is defined as
 
 struct node
 {
 int data;
 node* left;
 node* right;
 };
 
 */


void postOrder(node *root)
{
    if(root!=NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
        
    }
}
