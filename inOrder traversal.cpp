/*https://www.hackerrank.com/challenges/tree-inorder-traversal/problem
Complete the inOrder function in your editor below, which has 1 parameter: a pointer to the root of a binary tree. It must print the values in the tree's inorder traversal as a single line of space-separated values.*/
/* you only have to complete the function given below.
 Node is defined as
 
 struct node
 {
 int data;
 node* left;
 node* right;
 };
 
 */

void inOrder(node *root)
{
    if(root!=NULL)
    {
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
    else
        return;
}
