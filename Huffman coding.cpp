/*https://www.hackerrank.com/challenges/tree-huffman-decoding/problem
Huffman coding assigns variable length codewords to fixed length input characters based on their frequencies. More frequent characters are assigned shorter codewords and less frequent characters are assigned longer codewords. A Huffman tree is made for the input string and characters are decoded based on their position in the tree. We add a '0' to the codeword when we move left in the binary tree and a '1' when we move right in the binary tree.*/

/*
 The structure of the node is
 
 typedef struct node
 {
 int freq;
 char data;
 node * left;
 node * right;
 
 }node;
 
 */


void decode_huff(node * root,string s)
{
    //cout<<"1";
    int i =0;
    node* temp=root;
    
    //cout<<s;
    while(i<s.length())
    {
        //cout<<"jdsjd";
        if(s[i]=='1')
        {
            temp=temp->right;
            if(temp->right==NULL && temp->left==NULL)
            {
                cout<<temp->data;
                temp=root;
            }
            //cout<<"print s "<<s[i];
            
            i++;
        }
        
        else if(s[i]=='0')
        {   temp=temp->left;
            if(temp->right==NULL && temp->left==NULL)
            {
                cout<<temp->data;
                temp=root;
            }
            i++;
        }
    }
    
    return;
}


