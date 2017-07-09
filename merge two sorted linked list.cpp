/*
 https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists/problem
 
 Merge two sorted lists A and B as one linked list
 Node is defined as
 struct Node
 {
 int data;
 struct Node *next;
 }
 */
Node* MergeLists(Node *head1, Node* head2)

{
    Node* bekarvariable=NULL;
    
    
    if(head1==NULL)
    {head1=head2;
        return head1;
    }
    
    
    
    else
    {
        
        
        
        if(head1->data > head2->data)
        {
            bekarvariable=head1;
            head1=head2;
            head2=bekarvariable;
        }
        
        
        Node* lol = head1;
        Node* current=NULL;
        Node* prev=NULL;
        
        
        while(head1!=NULL && head2!=NULL)
        {
            if(head2->data<head1->data)
            {
                current = head2;
                head2 = head2->next;
                prev->next=current;
                current->next=head1;
                head1=current;
            }
            else
            {
                prev=head1;
                head1=head1->next;
            }
        }
        
        if(head1 == NULL)
        {
            prev->next = head2;
        }
        else if(head2 == NULL)
        {
            prev->next = head1;
        }
        return lol;
    }
    
    
    
    
    
}
