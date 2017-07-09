/*
 https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle/problem
 
 Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.
 
 A Node is defined as:
 struct Node {
 int data;
 struct Node* next;
 }
 */

bool has_cycle(Node* head)
{
    Node* fhead=head;
    Node* shead=head;
    while(fhead && shead )
    {
        fhead=fhead->next->next;
        shead=shead->next;
        if(fhead==shead)
        {
            return 1;
            
        }
    }
    
    return 0;
}
