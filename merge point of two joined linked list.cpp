//https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists/problem

/*
 Find merge point of two linked lists
 Node is defined as
 struct Node
 {
 int data;
 Node* next;
 }
 */
int FindMergeNode(Node *headA, Node *headB)
{
    Node* currentA=headA;
    Node* currentB=headB;
    while(currentB)
    {
        while(currentA && currentB)
        {
            if(currentA==currentB)
            {
                return currentA->data;
            }
            else
            {
                currentA=currentA->next;
            }
        }
        currentB=currentB->next;
        currentA=headA;
    }
    return 0;
}
