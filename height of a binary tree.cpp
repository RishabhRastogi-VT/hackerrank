/*https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/problem
The height of a binary tree is the number of edges between the tree's root and its furthest leaf. This means that a tree containing a single node has a height of o.

Complete the getHeight function provided in your editor so that it returns the height of a binary tree. This function has a parameter, root, which is a pointer to the root node of a binary tree.
Note -The Height of binary tree with single node is taken as zero.*/



/*The tree node has data, left child and right child
 struct node
 {
 int data;
 node* left;
 node* right;
 };
 
 */
int height(node * root)
{
    queue<node*> q;
    int height=0;
    
    q.push(root);
    
    while(1)
    {
        int node_count=q.size();
        if(node_count==0)
            return (height-1);
        
        height++;
        
        
        
        
        while(node_count > 0)
        {
            node* Node=q.front();
            q.pop();
            if(Node->left!=NULL)
                q.push(Node->left);
            
            if(Node->right!=NULL)
                q.push(Node->right);
            
            node_count--;
        }
    }
    
}

